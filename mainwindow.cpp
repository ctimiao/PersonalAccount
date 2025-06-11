#include <QFile>
#include <QTextStream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), m_modelAccount(new QSqlQueryModel(this)), m_modelBudget(new QSqlQueryModel(this))
    , m_modelDebt(new QSqlQueryModel(this)), m_modelUser(new QSqlQueryModel(this))
{
    ui->setupUi(this);
    MOVE_EVENT_STYLE;

    DB.Insignificance();
    InitNav();
    InitAccountView();
    InitBudget();
    InitDebt();
    InitUser();
    InitBudgetChart();
    InitStatChart();
    InitPersonal();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitNav()
{
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->btn_account_bar, &QPushButton::clicked, this, [=]()
    {
        ui->stackedWidget->setCurrentIndex(0);
        m_modelAccount->setQuery("SELECT id,uid,type,money,item,dt FROM accounts");
    });

    connect(ui->btn_budget_bar, &QPushButton::clicked, this, [=]()
    {
        ui->stackedWidget->setCurrentIndex(1);
        m_modelBudget->setQuery("SELECT id,budget,money,item,dt FROM budgets");
    });

    connect(ui->btn_debt_bar, &QPushButton::clicked, this, [=]()
    {
        ui->stackedWidget->setCurrentIndex(2);
        m_modelDebt->setQuery("SELECT id,uid,money,item,plan,day FROM debts");
    });

    connect(ui->btn_cal_bar, &QPushButton::clicked, this, [=]()
    {
        ui->stackedWidget->setCurrentIndex(3);
        InitStatChart();
    });

    connect(ui->btn_user_bar, &QPushButton::clicked, this, [=]()
    {
        ui->stackedWidget->setCurrentIndex(4);
        m_modelUser->setQuery("SELECT id,name,pwd,balance FROM users");
    });

    connect(ui->btn_me_bar, &QPushButton::clicked, this, [=]()
    {
        ui->stackedWidget->setCurrentIndex(5);
    });

    connect(ui->btn_close_bar, &QPushButton::clicked, this, [=]()
    {
        exit(0);
    });
}

void MainWindow::InitAccountView()
{
    ui->dt_account_query->setDate(QDate::currentDate());
    ui->dt_account->setDate(QDate::currentDate());
    TL.InitTableView(ui->tv_account, m_modelAccount, QStringList{"编号", "账户", "类型", "金额", "分类", "日期"}, "SELECT id,uid,type,money,item,dt FROM accounts");

    connect(ui->tv_account, &QTableView::clicked, this, [=](QModelIndex index)
    {
        if(!index.isValid())
            return;
        QSqlRecord record = m_modelAccount->record(index.row());

        QString id = record.value(0).toString();
        ui->btn_mod_account->setProperty("id", id);

        ui->le_uid_account->setText(record.value(1).toString());
        ui->le_money_account->setText(record.value(3).toString());
        ui->le_item_account->setText(record.value(4).toString());
        ui->dt_account->setDate(QDate::fromString(record.value(5).toString(), "yyyy-MM-dd"));

        QString type = record.value(2).toString();
        if(type == "支出") ui->rb_out_account->setChecked(true);
        if(type == "收入") ui->rb_in_account->setChecked(true);
    });

    connect(ui->btn_add_account, &QPushButton::clicked, this, [=]()
    {
        QString uid = TL.text(ui->le_uid_account);
        QString money = TL.text(ui->le_money_account);
        QString item = TL.text(ui->le_item_account);
        QString dt = TL.text(ui->dt_account);
        QString type = "收入";

        if(uid.isEmpty() || money.isEmpty() || item.isEmpty() || dt.isEmpty())
        {
            ERR("信息不能为空");
            return;
        }

        if(ui->rb_out_account->isChecked())
        {
            type = "支出";
            double cost = DB.GetSpentCost(dt, item);
            double budget = DB.GetBudget(dt, item);
            qDebug() << "budget:" << budget;
            if(budget > 0 && budget < money.toDouble() + cost)
            {
                QString info = QString("该日该类型的消费预算是：%1, 该项已消费 %2 已超预算，是否取消?").arg(budget).arg(cost + money.toDouble());
                QMessageBox::StandardButton ret = QMessageBox::question(this, "询问", info);
                if(ret == QMessageBox::Yes)
                {
                    qDebug() << "取消添加";
                    return;
                }
            }
        }

        QString val = QString("'%1','%2',%3,'%4','%5'").arg(uid).arg(type).arg(money).arg(item).arg(dt);
        bool ret = DB.insert("accounts", QStringList{"uid","type","money","item","dt"}, val);
        if(ret)
        {
            m_modelAccount->setQuery("SELECT id,uid,type,money,item,dt FROM accounts");
            OK("录入成功");
        }
    });

    connect(ui->btn_mod_account, &QPushButton::clicked, this, [=]()
    {
        if(!ui->tv_account->currentIndex().isValid())
        {
            ERR("选中后再修改");
            return;
        }

        QString uid = TL.text(ui->le_uid_account);
        QString money = TL.text(ui->le_money_account);
        QString item = TL.text(ui->le_item_account);
        QString dt = TL.text(ui->dt_account);
        QString type = "收入";
        if(ui->rb_out_account->isChecked()) type = "支出";

        QString sql = QString("UPDATE accounts SET uid='%1',type='%2',money=%3,item='%4',dt='%5' WHERE id=%6").
                arg(uid).arg(type).arg(money).arg(item).arg(dt).arg(ui->btn_mod_account->property("id").toString());
        if(DB.exec(sql))
        {
            m_modelAccount->setQuery("SELECT id,uid,type,money,item,dt FROM accounts");
            OK("修改成功");
        }
    });

    ui->lb_res_query->clear();
    connect(ui->btn_query_account, &QPushButton::clicked, this, [=]()
    {
        QString uid = TL.text(ui->le_uid_account_query);
        QString dt = TL.text(ui->dt_account_query);
        QString type;

        if (ui->rb_out_account_query->isChecked())
        {
            type = "支出";
        }
        if (ui->rb_in_account_query->isChecked())
        {
            type = "收入";
        }

        if(uid.isEmpty() || dt.isEmpty() || type.isEmpty())
        {
            ERR("信息不能为空");
            return;
        }

        QString sql = QString("SELECT id,uid,type,money,item,dt FROM accounts WHERE uid='%1' AND dt='%2' AND type='%3'").arg(uid).arg(dt).arg(type);
        m_modelAccount->setQuery(sql);

        QSqlQuery q;
        double sum = 0;
        if(q.exec(sql))
        {
            while (q.next())
            {
                sum += q.value(3).toDouble();
            }

            ui->lb_res_query->setText(QString("总额：%1").arg(sum));
        }
    });
}

void MainWindow::InitBudget()
{
    ui->dt_budget->setDate(QDate::currentDate());
    TL.InitTableView(ui->tv_budget, m_modelBudget, QStringList{"编号", "预算", "实际支出", "分类", "日期"}, "SELECT id,budget,money,item,dt FROM budgets");

    connect(ui->tv_budget, &QTableView::clicked, this, [=](QModelIndex index)
    {
        if(!index.isValid())
            return;
        QSqlRecord record = m_modelBudget->record(index.row());

        QString id = record.value(0).toString();
        ui->btn_exec_budget->setProperty("id", id);

        ui->le_budget_budget->setText(record.value(1).toString());
        ui->le_money_budget->setText(record.value(2).toString());
        ui->le_item_budget->setText(record.value(3).toString());
        ui->dt_budget->setDate(QDate::fromString(record.value(4).toString(), "yyyy-MM-dd"));
    });

    connect(ui->btn_set_budget, &QPushButton::clicked, this, [=]()
    {
        QString budget = TL.text(ui->le_budget_budget);
        QString item = TL.text(ui->le_item_budget);
        QString money = TL.text(ui->le_money_budget);
        QString dt = TL.text(ui->dt_budget);
        QString uid = DB.m_id;

        if(budget.isEmpty() || item.isEmpty() || dt.isEmpty())
        {
            ERR("信息不能为空");
            return;
        }

        QString val = QString("'%1', '%2', '%3','%4','%5'").arg(uid).arg(budget).arg(money).arg(item).arg(dt);
        bool ret = DB.insert("budgets", QStringList{"uid","budget","money","item","dt"}, val);
        if(ret)
        {
            m_modelBudget->setQuery("SELECT id,budget,money,item,dt FROM budgets");
            OK("设置预算成功");
        }
    });

    connect(ui->btn_exec_budget, &QPushButton::clicked, this, [=]()
    {
        if(!ui->tv_budget->currentIndex().isValid())
        {
            ERR("选中后再执行");
            return;
        }

        QString money = TL.text(ui->le_money_budget);
        if(money.isEmpty())
        {
            ERR("信息不能为空");
            return;
        }

        bool ret = DB.UpdateById("budgets", ui->btn_exec_budget->property("id").toString(), "money", money);
        if(ret)
        {
            m_modelBudget->setQuery("SELECT id,budget,money,item,dt FROM budgets");
            OK("执行成功");
        }
    });
}

void MainWindow::InitDebt()
{
    TL.InitTableView(ui->tv_debt, m_modelDebt, QStringList{"编号", "账户", "金额", "分类", "还款计划", "提醒日期"}, "SELECT id,uid,money,item,plan,day FROM debts");

    connect(ui->tv_debt, &QTableView::clicked, this, [=](QModelIndex index)
    {
        if(!index.isValid())
            return;
        QSqlRecord record = m_modelDebt->record(index.row());

        ui->le_uid_debt->setText(record.value(1).toString());
        ui->le_money_debt->setText(record.value(2).toString());
        ui->le_item_debt->setText(record.value(3).toString());
        ui->pte_plan_debt->setPlainText(record.value(4).toString());
        ui->le_day_debt->setText(record.value(5).toString());
    });

    connect(ui->btn_add_debt, &QPushButton::clicked, this, [=]()
    {
        QString uid = TL.text(ui->le_uid_debt);
        QString money = TL.text(ui->le_money_debt);
        QString item = TL.text(ui->le_item_debt);
        QString day = TL.text(ui->le_day_debt);
        QString plan = TL.text(ui->pte_plan_debt);

        if(uid.isEmpty() || money.isEmpty() || item.isEmpty() || day.isEmpty()|| plan.isEmpty())
        {
            ERR("信息不能为空");
            return;
        }

        QString sql = QString("INSERT INTO debts(uid,money,item,plan,day) VALUES('%1',%2,'%3','%4','%5')").arg(uid).arg(money).arg(item).arg(plan).arg(day);
        if(DB.exec(sql))
        {
            m_modelDebt->setQuery("SELECT id,uid,money,item,plan,day FROM debts");  // 刷新表格
            OK("录入成功");
        }
    });
}

void MainWindow::InitUser()
{
    TL.InitTableView(ui->tv_user, m_modelUser, QStringList{"账户", "名称", "密码", "金额"}, "SELECT id,name,pwd,balance FROM users");

    connect(ui->tv_user, &QTableView::clicked, this, [=](QModelIndex index)
    {
        if(!index.isValid())
            return;
        QSqlRecord record = m_modelUser->record(index.row());

        ui->le_id_user->setText(record.value(0).toString());
        ui->le_name_user->setText(record.value(1).toString());
        ui->le_pwd_user->setText(record.value(2).toString());
        ui->le_balance_user->setText(record.value(3).toString());
        ui->btn_mod_user->setProperty("id", record.value(0).toString());
    });

    connect(ui->btn_add_user, &QPushButton::clicked, this, [=]()
    {
        QString id = TL.text(ui->le_id_user);
        QString name = TL.text(ui->le_name_user);
        QString pwd = TL.text(ui->le_pwd_user);
        QString balance = TL.text(ui->le_balance_user);

        if(id.isEmpty() || name.isEmpty() || pwd.isEmpty() || balance.isEmpty())
        {
            ERR("信息不能为空");
            return;
        }

        if(DB.CheckId(id))
        {
            ERR("已有该账户，请更改ID后再添加");
            return;
        }

        QString val = QString("'%1','%2',%3,'%4'").arg(id).arg(name).arg(pwd).arg(balance);
        bool ret = DB.insert("users", QStringList{"id","name","pwd","balance"}, val);
        if(ret)
        {
            m_modelUser->setQuery("SELECT id,name,pwd,balance FROM users");
            OK("添加成功");
        }
    });

    connect(ui->btn_mod_user, &QPushButton::clicked, this, [=]()
    {
        if(!ui->tv_user->currentIndex().isValid())
        {
            ERR("选中后再修改");
            return;
        }
        int row = ui->tv_user->currentIndex().row();
        QSqlRecord record = m_modelUser->record(row);
        QString id = record.value(0).toString();

        QString name = TL.text(ui->le_name_user);
        QString pwd = TL.text(ui->le_pwd_user);
        QString balance = TL.text(ui->le_balance_user);

        if (name == record.value(1).toString() &&
            pwd == record.value(2).toString() &&
            balance == record.value(3).toString())
        {
            ERR("至少修改一项信息");
            return;
        }

        QString sql = QString("UPDATE users SET name='%1',pwd='%2',balance=%3 WHERE id='%4'").
                arg(name).arg(pwd).arg(balance).arg(id);
        if(DB.exec(sql))
        {
            m_modelUser->setQuery("SELECT id,name,pwd,balance FROM users");
            OK("修改成功");
        }
    });

    connect(ui->btn_del_user, &QPushButton::clicked, this, [=]()
    {
        if(!ui->tv_user->currentIndex().isValid())
        {
            ERR("选中后再删除");
            return;
        }

        QSqlRecord record = m_modelUser->record(ui->tv_user->currentIndex().row());
        QString id = record.value(0).toString();
        QString sql = QString("DELETE FROM users WHERE id='%1'").arg(id);
        if(DB.exec(sql))
        {
            m_modelUser->setQuery("SELECT id,name,pwd,balance FROM users");
            OK("删除成功");
        }
    });
}



/**************************************单小静****************************************************/

void MainWindow::InitBudgetChart()
{
    ui->dt_draw1_day->setDate(QDate::currentDate());
    QString day = QDate::currentDate().toString("yyyy-MM-dd");

    m_chart1 = new QChart;
    m_barSeries = new QBarSeries();

    m_barIn = new QBarSet("收入");
    m_barOut = new QBarSet("支出");
    m_barBudget = new QBarSet("预算");

    *m_barIn << DB.GetInOutByDay(day, "收入");
    *m_barOut << DB.GetInOutByDay(day, "支出");
    *m_barBudget << DB.GetBudgetByDay(day);

    m_barSeries->append(m_barIn);
    m_barSeries->append(m_barOut);
    m_barSeries->append(m_barBudget);
    m_chart1->addSeries(m_barSeries);

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    QStringList list;
    list << day;
    axisX->append(list);
    m_chart1->addAxis(axisX, Qt::AlignBottom);
    m_barSeries->attachAxis(axisX);

    m_chart1->setTheme(QChart::ChartThemeBlueCerulean);
    m_chart1->setAnimationOptions(QChart::SeriesAnimations);
    ui->view1->setChart(m_chart1);

    m_barSeries->setLabelsPosition(QAbstractBarSeries::LabelsInsideEnd);
    m_barSeries->setLabelsVisible(true);

    connect(ui->btn_draw1_day, &QPushButton::clicked, this, [=]()
    {
        QString day = ui->dt_draw1_day->date().toString("yyyy-MM-dd");

        double s1 = DB.GetInOutByDay(day, "收入");
        double s2 = DB.GetInOutByDay(day, "支出");
        double s3 = DB.GetBudgetByDay(day);

        m_barIn->replace(0, s1);
        m_barOut->replace(0, s2);
        m_barBudget->replace(0, s3);

        qDebug() << day << " " << s1 << " " << s2 << " " << s3;

        axisX->clear();
        axisX->append(QStringList{day});

        m_chart1->removeSeries(m_barSeries);
        m_chart1->addSeries(m_barSeries);

        m_chart1->update();
        ui->view1->update();
    });
}

void MainWindow::InitStatChart()
{
    if(!m_chart2)
    {
        m_chart2 = new QChart;
        m_series2 = new QPieSeries();
        m_series2->setHoleSize(0.35);
        m_series2->setLabelsVisible(true);

        m_chart2->addSeries(m_series2);
        m_chart2->setTitle("总支出比例饼状图");

        ui->view2->setChart(m_chart2);
        m_chart2->setTheme(QChart::ChartThemeBrownSand);
    }

    m_series2->clear();
    QMap<QString, double> map_out;
    double totalOut = DB.GetItemSum("支出", map_out);
    QMap<QString, double>::iterator i;
    for (i = map_out.begin(); i != map_out.end(); ++i)
    {
        m_series2->append(i.key() , i.value());
        qDebug() << i.key() << ":" << i.value();
    }

    if(!m_chart3)
    {
        m_chart3 = new QChart;

        m_series3 = new QPieSeries();
        m_series3->setHoleSize(0.35);
        m_series3->setLabelsVisible(true);

        m_chart3->addSeries(m_series3);
        m_chart3->setTitle("总收入比例饼状图");

        ui->view3->setChart(m_chart3);
        m_chart3->setTheme(QChart::ChartThemeBlueIcy);
    }
    m_series3->clear();
    QMap<QString, double> map_in;
    double totalIn = DB.GetItemSum("收入", map_in);
    QMap<QString, double>::iterator it;
    for (it = map_in.begin(); it != map_in.end(); ++it)
    {
        m_series3->append(it.key() , it.value());
        qDebug() << it.key() << ":" << it.value();
    }

    ui->lb_in->setText("总收入：" + QString::number(totalIn));
    ui->lb_out->setText("总支出：" + QString::number(totalOut));
}

void MainWindow::InitPersonal()
{
    connect(ui->btn_pwd_mod, &QPushButton::clicked, this, [=]
    {
        QString pwd1 = ui->le_pwd1_mod->text().trimmed();
        QString pwd2 = ui->le_pwd1_mod->text().trimmed();

        if(pwd1.isEmpty() || pwd2.isEmpty())
        {
            ERR("密码不能为空");
            return;
        }

        if(pwd1 != pwd2)
        {
            ERR("两次密码不相同");
            return;
        }

        if(pwd1.size() < 6)
        {
            ERR("密码长度不能想小于6位");
            return;
        }

        DB.UpdatePwd(DB.m_id, pwd1);
        OK("密码修改成功");
    });
}

void MainWindow::SetUser()
{
    ui->lb_user->setText(DB.m_name);
}

void MainWindow::on_btn_export_users_clicked()
{
    m_modelUser->setQuery("SELECT id,name,pwd,balance FROM users");

    QString dirPath = QFileDialog::getExistingDirectory(this, "选择保存目录");
    if(dirPath.isEmpty())  return;

    for (int i = 0; i < m_modelUser->rowCount(); ++i)
    {
        QString id = m_modelUser->record(i).value(0).toString();
        QString name = m_modelUser->record(i).value(1).toString();
        QString pwd = m_modelUser->record(i).value(2).toString();
        QString balance = m_modelUser->record(i).value(3).toString();

        QString fileName = QString("%1/%2.txt").arg(dirPath, id);
        QFile file(fileName);

        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream out(&file);
            out.setCodec("UTF-8");

            out << QStringLiteral("账户信息：\n");
            out << QStringLiteral("账户: ") << id << "\n";
            out << QStringLiteral("名称: ") << name << "\n";
            out << QStringLiteral("密码: ") << pwd << "\n";
            out << QStringLiteral("金额: ") << balance << "\n";
            out << "\n";

            out << QStringLiteral("预算信息：\n");
            QString budgetQuery = QString("SELECT budget,money,item,dt FROM budgets WHERE uid='%1'").arg(id);
            qDebug() << "Budget query:" << budgetQuery;
            m_modelBudget->setQuery(budgetQuery);
            for (int j = 0; j < m_modelBudget->rowCount(); ++j)
            {
                QString budget = m_modelBudget->record(j).value(0).toString();
                QString money = m_modelBudget->record(j).value(1).toString();
                QString item = m_modelBudget->record(j).value(2).toString();
                QString dt = m_modelBudget->record(j).value(3).toString();
                out << QStringLiteral("预算: ") << budget
                    << QStringLiteral(",  实际支出: ") << money
                    << QStringLiteral(",  分类: ") << item
                    << QStringLiteral(",  日期: ") << dt << "\n";
            }
            out << "\n";

            out << QStringLiteral("债务信息：\n");
            m_modelDebt->setQuery(QString("SELECT money,item,plan,day FROM debts WHERE uid='%1'").arg(id));
            for (int j = 0; j < m_modelDebt->rowCount(); ++j)
            {
                QString money = m_modelDebt->record(j).value(0).toString();
                QString item = m_modelDebt->record(j).value(1).toString();
                QString plan = m_modelDebt->record(j).value(2).toString();
                QString day = m_modelDebt->record(j).value(3).toString();
                out << QStringLiteral("金额: ") << money
                    << QStringLiteral(",  分类: ") << item
                    << QStringLiteral(",  还款计划: ") << plan
                    << QStringLiteral(",  提醒日期: ") << day << "\n";
            }
            out << "\n";

            out << QStringLiteral("账目信息：\n");
            m_modelAccount->setQuery(QString("SELECT type,money,item,dt FROM accounts WHERE uid='%1'").arg(id));
            for (int j = 0; j < m_modelAccount->rowCount(); ++j)
            {
                QString type = m_modelAccount->record(j).value(0).toString();
                QString money = m_modelAccount->record(j).value(1).toString();
                QString item = m_modelAccount->record(j).value(2).toString();
                QString dt = m_modelAccount->record(j).value(3).toString();
                out << QStringLiteral("类型: ") << type
                    << QStringLiteral(",  金额: ") << money
                    << QStringLiteral(",  分类: ") << item
                    << QStringLiteral(",  日期: ") << dt << "\n";
            }

            file.close();
        }
    }
    OK("所有用户数据导出成功");
}

MOVE_EVENT_IMPLEMENT(MainWindow);
