#include "formlogin.h"
#include "ui_formlogin.h"

FormLogin::FormLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLogin), m_main(new MainWindow)
{
    ui->setupUi(this);
    MOVE_EVENT_STYLE;
    ui->stackLR->setCurrentIndex(0);
}

FormLogin::~FormLogin()
{
    delete ui;
}

void FormLogin::on_btn_reg_clicked()
{
    QString id = ui->le_id_reg->text().trimmed();
    QString name = ui->le_name_reg->text().trimmed();
    QString pwd1 = ui->le_pwd1->text().trimmed();
    QString pwd2 = ui->le_pwd2->text().trimmed();

    if(id.isEmpty() || name.isEmpty() || pwd1.isEmpty() || pwd2.isEmpty())
    {
        ERR("信息不能为空");
        return;
    }

    if(pwd1 != pwd2)
    {
        ERR("两次密码不一致");
        return;
    }

    if(pwd1.size() < 5)
    {
        ERR("密码长度不能小于6位");
        return;
    }

    QString retName = DB.CheckLogin(id, pwd1);
    if(!retName.isEmpty())
    {
        ERR("已有该账户，请更改账户再注册!");
        return;
    }

    DB.AddUser(id, name, pwd1);
    OK("注册成功");
}

void FormLogin::on_btn_log_clicked()
{
    QString user = ui->le_user_log->text().trimmed();
    QString pwd = ui->le_pwd_user->text().trimmed();

    if(user.isEmpty() || pwd.isEmpty())
    {
        ERR("账户和密码不能为空");
        return;
    }

    QString name = DB.CheckLogin(user, pwd);
    if(name.isEmpty())
    {
        ERR("账户或密码错误");
        return;
    }

    DB.m_id = user;
    DB.m_name = name;
    m_main->show();
    m_main->SetUser();
    hide();
}

void FormLogin::on_btn_log_sw_clicked()
{
    ui->stackLR->setCurrentIndex(0);
}

void FormLogin::on_btn_reg_sw_clicked()
{
    ui->stackLR->setCurrentIndex(1);
}

void FormLogin::on_btn_quit_clicked()
{
    qDebug() << 123;
    exit(0);
}

MOVE_EVENT_IMPLEMENT(FormLogin)
