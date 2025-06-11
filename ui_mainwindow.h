/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QFrame *line;
    QWidget *widget_2;
    QStackedWidget *stackedWidget;
    QWidget *page_account;
    QGroupBox *groupBox_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QTableView *tv_account;
    QGroupBox *groupBox;
    QPushButton *btn_mod_account;
    QPushButton *btn_add_account;
    QLineEdit *le_uid_account;
    QDateEdit *dt_account;
    QLabel *lb_s6_2;
    QLabel *lb_s6_3;
    QLineEdit *le_money_account;
    QLabel *lb_s6_5;
    QLineEdit *le_item_account;
    QLabel *lb_s6_6;
    QRadioButton *rb_in_account;
    QRadioButton *rb_out_account;
    QGroupBox *groupBox_5;
    QLabel *lb_s6_4;
    QDateEdit *dt_account_query;
    QLabel *lb_s6_7;
    QLineEdit *le_uid_account_query;
    QRadioButton *rb_in_account_query;
    QRadioButton *rb_out_account_query;
    QPushButton *btn_query_account;
    QLabel *lb_res_query;
    QWidget *page_budget;
    QTableView *tv_budget;
    QPushButton *btn_exec_budget;
    QLineEdit *le_budget_budget;
    QPushButton *btn_set_budget;
    QLabel *lb_s_fan_3;
    QLineEdit *le_money_budget;
    QLabel *lb_s_fan_4;
    QLabel *lb_s_fan_6;
    QDateEdit *dt_budget;
    QLineEdit *le_item_budget;
    QLabel *lb_s_fan_7;
    QWidget *page_debt;
    QGroupBox *groupBox_6;
    QPushButton *btn_add_debt;
    QLineEdit *le_uid_debt;
    QLabel *lb_s6_8;
    QLabel *lb_s6_9;
    QLineEdit *le_money_debt;
    QLabel *lb_s6_10;
    QLineEdit *le_item_debt;
    QLabel *lb_s6_11;
    QLineEdit *le_day_debt;
    QLabel *lb_s6_12;
    QPlainTextEdit *pte_plan_debt;
    QGroupBox *groupBox_7;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_23;
    QTableView *tv_debt;
    QWidget *page_cal;
    QGroupBox *groupBox_3;
    QLabel *label_22;
    QChartView *view1;
    QDateEdit *dt_draw1_day;
    QLabel *lb_s_fan_8;
    QPushButton *btn_draw1_day;
    QGroupBox *groupBox_4;
    QLabel *label_25;
    QChartView *view2;
    QLabel *lb_out;
    QLabel *lb_in;
    QChartView *view3;
    QWidget *page_user;
    QGroupBox *groupBox_8;
    QPushButton *btn_del_user;
    QLineEdit *le_id_user;
    QLabel *lb_s6_13;
    QLabel *lb_s6_14;
    QLineEdit *le_name_user;
    QLabel *lb_s6_15;
    QLineEdit *le_pwd_user;
    QLabel *lb_s6_16;
    QLineEdit *le_balance_user;
    QPushButton *btn_add_user;
    QPushButton *btn_mod_user;
    QPushButton *btn_export_users;
    QGroupBox *groupBox_9;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_27;
    QTableView *tv_user;
    QWidget *page_me;
    QLabel *lb_s6_17;
    QLabel *lb_s6_18;
    QPushButton *btn_pwd_mod;
    QLineEdit *le_pwd2_mod;
    QLineEdit *le_pwd1_mod;
    QPushButton *btn_budget_bar;
    QPushButton *btn_close_bar;
    QLabel *lb_header;
    QLabel *lb_user;
    QPushButton *btn_account_bar;
    QLabel *label_7;
    QLabel *label;
    QPushButton *btn_debt_bar;
    QPushButton *btn_cal_bar;
    QPushButton *btn_user_bar;
    QPushButton *btn_me_bar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1073, 675);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 1030, 606));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(113, 157, 254);"));
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 58, 1030, 2));
        line->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(0, 0, 255);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(120, 60, 911, 551));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 911, 551));
        page_account = new QWidget();
        page_account->setObjectName(QString::fromUtf8("page_account"));
        groupBox_2 = new QGroupBox(page_account);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 671, 531));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 30, 23, 23));
        label_17->setStyleSheet(QString::fromUtf8("border-image: url(:/img/state.png);"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 67, 23, 23));
        label_18->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the.png);"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(21, 103, 23, 23));
        label_19->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the1.png);"));
        tv_account = new QTableView(groupBox_2);
        tv_account->setObjectName(QString::fromUtf8("tv_account"));
        tv_account->setGeometry(QRect(10, 20, 651, 501));
        groupBox = new QGroupBox(page_account);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(690, 250, 211, 281));
        btn_mod_account = new QPushButton(groupBox);
        btn_mod_account->setObjectName(QString::fromUtf8("btn_mod_account"));
        btn_mod_account->setGeometry(QRect(120, 240, 71, 31));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_mod_account->sizePolicy().hasHeightForWidth());
        btn_mod_account->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btn_mod_account->setFont(font);
        btn_mod_account->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        btn_add_account = new QPushButton(groupBox);
        btn_add_account->setObjectName(QString::fromUtf8("btn_add_account"));
        btn_add_account->setGeometry(QRect(20, 240, 71, 31));
        sizePolicy.setHeightForWidth(btn_add_account->sizePolicy().hasHeightForWidth());
        btn_add_account->setSizePolicy(sizePolicy);
        btn_add_account->setFont(font);
        btn_add_account->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        le_uid_account = new QLineEdit(groupBox);
        le_uid_account->setObjectName(QString::fromUtf8("le_uid_account"));
        le_uid_account->setGeometry(QRect(80, 28, 121, 31));
        sizePolicy.setHeightForWidth(le_uid_account->sizePolicy().hasHeightForWidth());
        le_uid_account->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        le_uid_account->setFont(font1);
        le_uid_account->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_uid_account->setEchoMode(QLineEdit::Normal);
        le_uid_account->setReadOnly(false);
        dt_account = new QDateEdit(groupBox);
        dt_account->setObjectName(QString::fromUtf8("dt_account"));
        dt_account->setGeometry(QRect(80, 148, 121, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(12);
        dt_account->setFont(font2);
        dt_account->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        lb_s6_2 = new QLabel(groupBox);
        lb_s6_2->setObjectName(QString::fromUtf8("lb_s6_2"));
        lb_s6_2->setGeometry(QRect(10, 33, 61, 21));
        lb_s6_2->setFont(font1);
        lb_s6_3 = new QLabel(groupBox);
        lb_s6_3->setObjectName(QString::fromUtf8("lb_s6_3"));
        lb_s6_3->setGeometry(QRect(10, 153, 61, 21));
        lb_s6_3->setFont(font1);
        le_money_account = new QLineEdit(groupBox);
        le_money_account->setObjectName(QString::fromUtf8("le_money_account"));
        le_money_account->setGeometry(QRect(80, 68, 121, 31));
        sizePolicy.setHeightForWidth(le_money_account->sizePolicy().hasHeightForWidth());
        le_money_account->setSizePolicy(sizePolicy);
        le_money_account->setFont(font1);
        le_money_account->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_money_account->setEchoMode(QLineEdit::Normal);
        le_money_account->setReadOnly(false);
        lb_s6_5 = new QLabel(groupBox);
        lb_s6_5->setObjectName(QString::fromUtf8("lb_s6_5"));
        lb_s6_5->setGeometry(QRect(10, 73, 61, 21));
        lb_s6_5->setFont(font1);
        le_item_account = new QLineEdit(groupBox);
        le_item_account->setObjectName(QString::fromUtf8("le_item_account"));
        le_item_account->setGeometry(QRect(80, 108, 121, 31));
        sizePolicy.setHeightForWidth(le_item_account->sizePolicy().hasHeightForWidth());
        le_item_account->setSizePolicy(sizePolicy);
        le_item_account->setFont(font1);
        le_item_account->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_item_account->setEchoMode(QLineEdit::Normal);
        le_item_account->setReadOnly(false);
        lb_s6_6 = new QLabel(groupBox);
        lb_s6_6->setObjectName(QString::fromUtf8("lb_s6_6"));
        lb_s6_6->setGeometry(QRect(10, 113, 61, 21));
        lb_s6_6->setFont(font1);
        rb_in_account = new QRadioButton(groupBox);
        rb_in_account->setObjectName(QString::fromUtf8("rb_in_account"));
        rb_in_account->setGeometry(QRect(40, 188, 71, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        rb_in_account->setFont(font3);
        rb_in_account->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\256\213\344\275\223\";"));
        rb_in_account->setChecked(false);
        rb_out_account = new QRadioButton(groupBox);
        rb_out_account->setObjectName(QString::fromUtf8("rb_out_account"));
        rb_out_account->setGeometry(QRect(130, 188, 71, 31));
        rb_out_account->setFont(font3);
        rb_out_account->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\256\213\344\275\223\";"));
        rb_out_account->setChecked(true);
        groupBox_5 = new QGroupBox(page_account);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(690, 20, 211, 221));
        lb_s6_4 = new QLabel(groupBox_5);
        lb_s6_4->setObjectName(QString::fromUtf8("lb_s6_4"));
        lb_s6_4->setGeometry(QRect(12, 40, 61, 20));
        lb_s6_4->setFont(font1);
        dt_account_query = new QDateEdit(groupBox_5);
        dt_account_query->setObjectName(QString::fromUtf8("dt_account_query"));
        dt_account_query->setGeometry(QRect(80, 36, 121, 30));
        dt_account_query->setFont(font2);
        dt_account_query->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        lb_s6_7 = new QLabel(groupBox_5);
        lb_s6_7->setObjectName(QString::fromUtf8("lb_s6_7"));
        lb_s6_7->setGeometry(QRect(12, 85, 61, 20));
        lb_s6_7->setFont(font1);
        le_uid_account_query = new QLineEdit(groupBox_5);
        le_uid_account_query->setObjectName(QString::fromUtf8("le_uid_account_query"));
        le_uid_account_query->setGeometry(QRect(80, 80, 121, 30));
        sizePolicy.setHeightForWidth(le_uid_account_query->sizePolicy().hasHeightForWidth());
        le_uid_account_query->setSizePolicy(sizePolicy);
        le_uid_account_query->setFont(font1);
        le_uid_account_query->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_uid_account_query->setEchoMode(QLineEdit::Normal);
        le_uid_account_query->setReadOnly(false);
        rb_in_account_query = new QRadioButton(groupBox_5);
        rb_in_account_query->setObjectName(QString::fromUtf8("rb_in_account_query"));
        rb_in_account_query->setGeometry(QRect(40, 120, 71, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        rb_in_account_query->setFont(font4);
        rb_out_account_query = new QRadioButton(groupBox_5);
        rb_out_account_query->setObjectName(QString::fromUtf8("rb_out_account_query"));
        rb_out_account_query->setGeometry(QRect(130, 120, 71, 31));
        rb_out_account_query->setFont(font4);
        btn_query_account = new QPushButton(groupBox_5);
        btn_query_account->setObjectName(QString::fromUtf8("btn_query_account"));
        btn_query_account->setGeometry(QRect(80, 180, 71, 31));
        sizePolicy.setHeightForWidth(btn_query_account->sizePolicy().hasHeightForWidth());
        btn_query_account->setSizePolicy(sizePolicy);
        btn_query_account->setFont(font);
        btn_query_account->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        lb_res_query = new QLabel(groupBox_5);
        lb_res_query->setObjectName(QString::fromUtf8("lb_res_query"));
        lb_res_query->setGeometry(QRect(80, 155, 91, 20));
        lb_s6_4->raise();
        dt_account_query->raise();
        le_uid_account_query->raise();
        lb_s6_7->raise();
        rb_in_account_query->raise();
        rb_out_account_query->raise();
        btn_query_account->raise();
        lb_res_query->raise();
        stackedWidget->addWidget(page_account);
        page_budget = new QWidget();
        page_budget->setObjectName(QString::fromUtf8("page_budget"));
        tv_budget = new QTableView(page_budget);
        tv_budget->setObjectName(QString::fromUtf8("tv_budget"));
        tv_budget->setGeometry(QRect(20, 20, 871, 411));
        btn_exec_budget = new QPushButton(page_budget);
        btn_exec_budget->setObjectName(QString::fromUtf8("btn_exec_budget"));
        btn_exec_budget->setGeometry(QRect(800, 510, 70, 31));
        sizePolicy.setHeightForWidth(btn_exec_budget->sizePolicy().hasHeightForWidth());
        btn_exec_budget->setSizePolicy(sizePolicy);
        btn_exec_budget->setFont(font3);
        btn_exec_budget->setStyleSheet(QString::fromUtf8("border:1px solid rgb(255, 81, 23);\n"
"border-radius:4px;\n"
"background-color: rgb(255, 81, 23);\n"
"font: 9pt \"\345\256\213\344\275\223\";"));
        le_budget_budget = new QLineEdit(page_budget);
        le_budget_budget->setObjectName(QString::fromUtf8("le_budget_budget"));
        le_budget_budget->setGeometry(QRect(120, 449, 141, 31));
        sizePolicy.setHeightForWidth(le_budget_budget->sizePolicy().hasHeightForWidth());
        le_budget_budget->setSizePolicy(sizePolicy);
        le_budget_budget->setFont(font1);
        le_budget_budget->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_budget_budget->setEchoMode(QLineEdit::Normal);
        le_budget_budget->setReadOnly(false);
        btn_set_budget = new QPushButton(page_budget);
        btn_set_budget->setObjectName(QString::fromUtf8("btn_set_budget"));
        btn_set_budget->setGeometry(QRect(800, 450, 70, 31));
        sizePolicy.setHeightForWidth(btn_set_budget->sizePolicy().hasHeightForWidth());
        btn_set_budget->setSizePolicy(sizePolicy);
        btn_set_budget->setFont(font3);
        btn_set_budget->setStyleSheet(QString::fromUtf8("border:1px solid rgb(60, 255, 200);\n"
"border-radius:4px;\n"
"background-color: rgb(60, 255, 200);\n"
"font: 9pt \"\345\256\213\344\275\223\";"));
        lb_s_fan_3 = new QLabel(page_budget);
        lb_s_fan_3->setObjectName(QString::fromUtf8("lb_s_fan_3"));
        lb_s_fan_3->setGeometry(QRect(30, 450, 81, 21));
        lb_s_fan_3->setFont(font1);
        le_money_budget = new QLineEdit(page_budget);
        le_money_budget->setObjectName(QString::fromUtf8("le_money_budget"));
        le_money_budget->setGeometry(QRect(120, 510, 141, 31));
        sizePolicy.setHeightForWidth(le_money_budget->sizePolicy().hasHeightForWidth());
        le_money_budget->setSizePolicy(sizePolicy);
        le_money_budget->setFont(font1);
        le_money_budget->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_money_budget->setEchoMode(QLineEdit::Normal);
        le_money_budget->setReadOnly(false);
        lb_s_fan_4 = new QLabel(page_budget);
        lb_s_fan_4->setObjectName(QString::fromUtf8("lb_s_fan_4"));
        lb_s_fan_4->setGeometry(QRect(30, 511, 81, 21));
        lb_s_fan_4->setFont(font1);
        lb_s_fan_6 = new QLabel(page_budget);
        lb_s_fan_6->setObjectName(QString::fromUtf8("lb_s_fan_6"));
        lb_s_fan_6->setGeometry(QRect(390, 513, 41, 21));
        lb_s_fan_6->setFont(font1);
        dt_budget = new QDateEdit(page_budget);
        dt_budget->setObjectName(QString::fromUtf8("dt_budget"));
        dt_budget->setGeometry(QRect(440, 510, 141, 31));
        dt_budget->setFont(font2);
        dt_budget->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_item_budget = new QLineEdit(page_budget);
        le_item_budget->setObjectName(QString::fromUtf8("le_item_budget"));
        le_item_budget->setGeometry(QRect(440, 450, 141, 31));
        sizePolicy.setHeightForWidth(le_item_budget->sizePolicy().hasHeightForWidth());
        le_item_budget->setSizePolicy(sizePolicy);
        le_item_budget->setFont(font1);
        le_item_budget->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_item_budget->setEchoMode(QLineEdit::Normal);
        le_item_budget->setReadOnly(false);
        lb_s_fan_7 = new QLabel(page_budget);
        lb_s_fan_7->setObjectName(QString::fromUtf8("lb_s_fan_7"));
        lb_s_fan_7->setGeometry(QRect(391, 451, 41, 21));
        lb_s_fan_7->setFont(font1);
        stackedWidget->addWidget(page_budget);
        page_debt = new QWidget();
        page_debt->setObjectName(QString::fromUtf8("page_debt"));
        groupBox_6 = new QGroupBox(page_debt);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(690, 10, 211, 531));
        btn_add_debt = new QPushButton(groupBox_6);
        btn_add_debt->setObjectName(QString::fromUtf8("btn_add_debt"));
        btn_add_debt->setGeometry(QRect(10, 480, 191, 31));
        sizePolicy.setHeightForWidth(btn_add_debt->sizePolicy().hasHeightForWidth());
        btn_add_debt->setSizePolicy(sizePolicy);
        btn_add_debt->setFont(font);
        btn_add_debt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        le_uid_debt = new QLineEdit(groupBox_6);
        le_uid_debt->setObjectName(QString::fromUtf8("le_uid_debt"));
        le_uid_debt->setGeometry(QRect(80, 28, 121, 31));
        sizePolicy.setHeightForWidth(le_uid_debt->sizePolicy().hasHeightForWidth());
        le_uid_debt->setSizePolicy(sizePolicy);
        le_uid_debt->setFont(font1);
        le_uid_debt->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_uid_debt->setEchoMode(QLineEdit::Normal);
        le_uid_debt->setReadOnly(false);
        lb_s6_8 = new QLabel(groupBox_6);
        lb_s6_8->setObjectName(QString::fromUtf8("lb_s6_8"));
        lb_s6_8->setGeometry(QRect(10, 33, 61, 21));
        lb_s6_8->setFont(font1);
        lb_s6_9 = new QLabel(groupBox_6);
        lb_s6_9->setObjectName(QString::fromUtf8("lb_s6_9"));
        lb_s6_9->setGeometry(QRect(10, 180, 61, 21));
        lb_s6_9->setFont(font1);
        le_money_debt = new QLineEdit(groupBox_6);
        le_money_debt->setObjectName(QString::fromUtf8("le_money_debt"));
        le_money_debt->setGeometry(QRect(80, 75, 121, 31));
        sizePolicy.setHeightForWidth(le_money_debt->sizePolicy().hasHeightForWidth());
        le_money_debt->setSizePolicy(sizePolicy);
        le_money_debt->setFont(font1);
        le_money_debt->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_money_debt->setEchoMode(QLineEdit::Normal);
        le_money_debt->setReadOnly(false);
        lb_s6_10 = new QLabel(groupBox_6);
        lb_s6_10->setObjectName(QString::fromUtf8("lb_s6_10"));
        lb_s6_10->setGeometry(QRect(10, 80, 61, 21));
        lb_s6_10->setFont(font1);
        le_item_debt = new QLineEdit(groupBox_6);
        le_item_debt->setObjectName(QString::fromUtf8("le_item_debt"));
        le_item_debt->setGeometry(QRect(80, 125, 121, 31));
        sizePolicy.setHeightForWidth(le_item_debt->sizePolicy().hasHeightForWidth());
        le_item_debt->setSizePolicy(sizePolicy);
        le_item_debt->setFont(font1);
        le_item_debt->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_item_debt->setEchoMode(QLineEdit::Normal);
        le_item_debt->setReadOnly(false);
        lb_s6_11 = new QLabel(groupBox_6);
        lb_s6_11->setObjectName(QString::fromUtf8("lb_s6_11"));
        lb_s6_11->setGeometry(QRect(10, 130, 61, 21));
        lb_s6_11->setFont(font1);
        le_day_debt = new QLineEdit(groupBox_6);
        le_day_debt->setObjectName(QString::fromUtf8("le_day_debt"));
        le_day_debt->setGeometry(QRect(80, 177, 121, 31));
        sizePolicy.setHeightForWidth(le_day_debt->sizePolicy().hasHeightForWidth());
        le_day_debt->setSizePolicy(sizePolicy);
        le_day_debt->setFont(font1);
        le_day_debt->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_day_debt->setEchoMode(QLineEdit::Normal);
        le_day_debt->setReadOnly(false);
        lb_s6_12 = new QLabel(groupBox_6);
        lb_s6_12->setObjectName(QString::fromUtf8("lb_s6_12"));
        lb_s6_12->setGeometry(QRect(10, 220, 181, 21));
        lb_s6_12->setFont(font1);
        pte_plan_debt = new QPlainTextEdit(groupBox_6);
        pte_plan_debt->setObjectName(QString::fromUtf8("pte_plan_debt"));
        pte_plan_debt->setGeometry(QRect(10, 250, 191, 201));
        pte_plan_debt->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        groupBox_7 = new QGroupBox(page_debt);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 671, 531));
        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 30, 23, 23));
        label_20->setStyleSheet(QString::fromUtf8("border-image: url(:/img/state.png);"));
        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 67, 23, 23));
        label_21->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the.png);"));
        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(21, 103, 23, 23));
        label_23->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the1.png);"));
        tv_debt = new QTableView(groupBox_7);
        tv_debt->setObjectName(QString::fromUtf8("tv_debt"));
        tv_debt->setGeometry(QRect(10, 20, 651, 501));
        stackedWidget->addWidget(page_debt);
        page_cal = new QWidget();
        page_cal->setObjectName(QString::fromUtf8("page_cal"));
        groupBox_3 = new QGroupBox(page_cal);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 10, 430, 531));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(21, 103, 23, 23));
        label_22->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the1.png);"));
        view1 = new QChartView(groupBox_3);
        view1->setObjectName(QString::fromUtf8("view1"));
        view1->setGeometry(QRect(10, 110, 411, 311));
        dt_draw1_day = new QDateEdit(groupBox_3);
        dt_draw1_day->setObjectName(QString::fromUtf8("dt_draw1_day"));
        dt_draw1_day->setGeometry(QRect(110, 42, 141, 31));
        dt_draw1_day->setFont(font2);
        dt_draw1_day->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        lb_s_fan_8 = new QLabel(groupBox_3);
        lb_s_fan_8->setObjectName(QString::fromUtf8("lb_s_fan_8"));
        lb_s_fan_8->setGeometry(QRect(40, 45, 61, 21));
        lb_s_fan_8->setFont(font1);
        btn_draw1_day = new QPushButton(groupBox_3);
        btn_draw1_day->setObjectName(QString::fromUtf8("btn_draw1_day"));
        btn_draw1_day->setGeometry(QRect(290, 41, 70, 31));
        sizePolicy.setHeightForWidth(btn_draw1_day->sizePolicy().hasHeightForWidth());
        btn_draw1_day->setSizePolicy(sizePolicy);
        btn_draw1_day->setFont(font3);
        btn_draw1_day->setStyleSheet(QString::fromUtf8("border:1px solid rgb(60, 255, 200);\n"
"font: 9pt \"\345\256\213\344\275\223\";\n"
"border-radius:4px;\n"
"background-color: rgb(60, 255, 200);"));
        groupBox_4 = new QGroupBox(page_cal);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(470, 10, 430, 531));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(21, 103, 23, 23));
        label_25->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the1.png);"));
        view2 = new QChartView(groupBox_4);
        view2->setObjectName(QString::fromUtf8("view2"));
        view2->setGeometry(QRect(10, 60, 411, 201));
        lb_out = new QLabel(groupBox_4);
        lb_out->setObjectName(QString::fromUtf8("lb_out"));
        lb_out->setGeometry(QRect(10, 30, 241, 21));
        lb_in = new QLabel(groupBox_4);
        lb_in->setObjectName(QString::fromUtf8("lb_in"));
        lb_in->setGeometry(QRect(10, 280, 241, 21));
        view3 = new QChartView(groupBox_4);
        view3->setObjectName(QString::fromUtf8("view3"));
        view3->setGeometry(QRect(10, 310, 411, 211));
        stackedWidget->addWidget(page_cal);
        page_user = new QWidget();
        page_user->setObjectName(QString::fromUtf8("page_user"));
        groupBox_8 = new QGroupBox(page_user);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(690, 10, 211, 531));
        btn_del_user = new QPushButton(groupBox_8);
        btn_del_user->setObjectName(QString::fromUtf8("btn_del_user"));
        btn_del_user->setGeometry(QRect(20, 290, 171, 31));
        sizePolicy.setHeightForWidth(btn_del_user->sizePolicy().hasHeightForWidth());
        btn_del_user->setSizePolicy(sizePolicy);
        btn_del_user->setFont(font);
        btn_del_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        le_id_user = new QLineEdit(groupBox_8);
        le_id_user->setObjectName(QString::fromUtf8("le_id_user"));
        le_id_user->setGeometry(QRect(80, 28, 121, 31));
        sizePolicy.setHeightForWidth(le_id_user->sizePolicy().hasHeightForWidth());
        le_id_user->setSizePolicy(sizePolicy);
        le_id_user->setFont(font1);
        le_id_user->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_id_user->setEchoMode(QLineEdit::Normal);
        le_id_user->setReadOnly(false);
        lb_s6_13 = new QLabel(groupBox_8);
        lb_s6_13->setObjectName(QString::fromUtf8("lb_s6_13"));
        lb_s6_13->setGeometry(QRect(10, 33, 61, 21));
        lb_s6_13->setFont(font1);
        lb_s6_14 = new QLabel(groupBox_8);
        lb_s6_14->setObjectName(QString::fromUtf8("lb_s6_14"));
        lb_s6_14->setGeometry(QRect(10, 180, 61, 21));
        lb_s6_14->setFont(font1);
        le_name_user = new QLineEdit(groupBox_8);
        le_name_user->setObjectName(QString::fromUtf8("le_name_user"));
        le_name_user->setGeometry(QRect(80, 75, 121, 31));
        sizePolicy.setHeightForWidth(le_name_user->sizePolicy().hasHeightForWidth());
        le_name_user->setSizePolicy(sizePolicy);
        le_name_user->setFont(font1);
        le_name_user->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_name_user->setEchoMode(QLineEdit::Normal);
        le_name_user->setReadOnly(false);
        lb_s6_15 = new QLabel(groupBox_8);
        lb_s6_15->setObjectName(QString::fromUtf8("lb_s6_15"));
        lb_s6_15->setGeometry(QRect(10, 80, 61, 21));
        lb_s6_15->setFont(font1);
        le_pwd_user = new QLineEdit(groupBox_8);
        le_pwd_user->setObjectName(QString::fromUtf8("le_pwd_user"));
        le_pwd_user->setGeometry(QRect(80, 125, 121, 31));
        sizePolicy.setHeightForWidth(le_pwd_user->sizePolicy().hasHeightForWidth());
        le_pwd_user->setSizePolicy(sizePolicy);
        le_pwd_user->setFont(font1);
        le_pwd_user->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_pwd_user->setEchoMode(QLineEdit::Normal);
        le_pwd_user->setReadOnly(false);
        lb_s6_16 = new QLabel(groupBox_8);
        lb_s6_16->setObjectName(QString::fromUtf8("lb_s6_16"));
        lb_s6_16->setGeometry(QRect(10, 130, 61, 21));
        lb_s6_16->setFont(font1);
        le_balance_user = new QLineEdit(groupBox_8);
        le_balance_user->setObjectName(QString::fromUtf8("le_balance_user"));
        le_balance_user->setGeometry(QRect(80, 177, 121, 31));
        sizePolicy.setHeightForWidth(le_balance_user->sizePolicy().hasHeightForWidth());
        le_balance_user->setSizePolicy(sizePolicy);
        le_balance_user->setFont(font1);
        le_balance_user->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_balance_user->setEchoMode(QLineEdit::Normal);
        le_balance_user->setReadOnly(false);
        btn_add_user = new QPushButton(groupBox_8);
        btn_add_user->setObjectName(QString::fromUtf8("btn_add_user"));
        btn_add_user->setGeometry(QRect(20, 240, 71, 31));
        sizePolicy.setHeightForWidth(btn_add_user->sizePolicy().hasHeightForWidth());
        btn_add_user->setSizePolicy(sizePolicy);
        btn_add_user->setFont(font);
        btn_add_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        btn_mod_user = new QPushButton(groupBox_8);
        btn_mod_user->setObjectName(QString::fromUtf8("btn_mod_user"));
        btn_mod_user->setGeometry(QRect(120, 240, 71, 31));
        sizePolicy.setHeightForWidth(btn_mod_user->sizePolicy().hasHeightForWidth());
        btn_mod_user->setSizePolicy(sizePolicy);
        btn_mod_user->setFont(font);
        btn_mod_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        btn_export_users = new QPushButton(groupBox_8);
        btn_export_users->setObjectName(QString::fromUtf8("btn_export_users"));
        btn_export_users->setGeometry(QRect(20, 340, 171, 31));
        btn_export_users->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        groupBox_9 = new QGroupBox(page_user);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 10, 671, 531));
        label_24 = new QLabel(groupBox_9);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 30, 23, 23));
        label_24->setStyleSheet(QString::fromUtf8("border-image: url(:/img/state.png);"));
        label_26 = new QLabel(groupBox_9);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(20, 67, 23, 23));
        label_26->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the.png);"));
        label_27 = new QLabel(groupBox_9);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(21, 103, 23, 23));
        label_27->setStyleSheet(QString::fromUtf8("border-image: url(:/img/the1.png);"));
        tv_user = new QTableView(groupBox_9);
        tv_user->setObjectName(QString::fromUtf8("tv_user"));
        tv_user->setGeometry(QRect(10, 20, 651, 501));
        stackedWidget->addWidget(page_user);
        page_me = new QWidget();
        page_me->setObjectName(QString::fromUtf8("page_me"));
        lb_s6_17 = new QLabel(page_me);
        lb_s6_17->setObjectName(QString::fromUtf8("lb_s6_17"));
        lb_s6_17->setGeometry(QRect(260, 220, 81, 21));
        lb_s6_17->setFont(font1);
        lb_s6_18 = new QLabel(page_me);
        lb_s6_18->setObjectName(QString::fromUtf8("lb_s6_18"));
        lb_s6_18->setGeometry(QRect(260, 155, 81, 21));
        lb_s6_18->setFont(font1);
        btn_pwd_mod = new QPushButton(page_me);
        btn_pwd_mod->setObjectName(QString::fromUtf8("btn_pwd_mod"));
        btn_pwd_mod->setGeometry(QRect(350, 310, 171, 31));
        sizePolicy.setHeightForWidth(btn_pwd_mod->sizePolicy().hasHeightForWidth());
        btn_pwd_mod->setSizePolicy(sizePolicy);
        btn_pwd_mod->setFont(font);
        btn_pwd_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0072C6;\n"
"    color: white;\n"
"    border-style: outset;\n"
"    border-width: 0px;\n"
"    border-radius: 6px;\n"
"    border-color: beige;\n"
"	font: 9pt \"\345\271\274\345\234\206\";\n"
"    padding: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #148CD2;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #005CA3;\n"
"}"));
        le_pwd2_mod = new QLineEdit(page_me);
        le_pwd2_mod->setObjectName(QString::fromUtf8("le_pwd2_mod"));
        le_pwd2_mod->setGeometry(QRect(350, 215, 180, 31));
        sizePolicy.setHeightForWidth(le_pwd2_mod->sizePolicy().hasHeightForWidth());
        le_pwd2_mod->setSizePolicy(sizePolicy);
        le_pwd2_mod->setFont(font1);
        le_pwd2_mod->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_pwd2_mod->setEchoMode(QLineEdit::Password);
        le_pwd2_mod->setReadOnly(false);
        le_pwd1_mod = new QLineEdit(page_me);
        le_pwd1_mod->setObjectName(QString::fromUtf8("le_pwd1_mod"));
        le_pwd1_mod->setGeometry(QRect(350, 150, 180, 31));
        sizePolicy.setHeightForWidth(le_pwd1_mod->sizePolicy().hasHeightForWidth());
        le_pwd1_mod->setSizePolicy(sizePolicy);
        le_pwd1_mod->setFont(font1);
        le_pwd1_mod->setStyleSheet(QString::fromUtf8("border:1px solid rgb(110,220,255);\n"
"border-radius:8px;"));
        le_pwd1_mod->setEchoMode(QLineEdit::Password);
        le_pwd1_mod->setReadOnly(false);
        stackedWidget->addWidget(page_me);
        btn_budget_bar = new QPushButton(widget);
        btn_budget_bar->setObjectName(QString::fromUtf8("btn_budget_bar"));
        btn_budget_bar->setGeometry(QRect(0, 105, 120, 45));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        btn_budget_bar->setFont(font5);
        btn_budget_bar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\345\271\274\345\234\206\";\n"
"	color: rgb(255, 255, 255);\n"
"	border:0px;\n"
"	background-color: rgb(113, 157, 254);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(110, 220, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/admin/img/all.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_budget_bar->setIcon(icon);
        btn_close_bar = new QPushButton(widget);
        btn_close_bar->setObjectName(QString::fromUtf8("btn_close_bar"));
        btn_close_bar->setGeometry(QRect(0, 330, 120, 45));
        btn_close_bar->setFont(font5);
        btn_close_bar->setStyleSheet(QString::fromUtf8("#btn_close_bar{\n"
"	font: 12pt \"\345\271\274\345\234\206\";\n"
"	color: rgb(255, 255, 255);\n"
"	border:0px;\n"
"	background-color: rgb(113, 157, 254);\n"
"}\n"
"\n"
"#btn_close_bar:hover{\n"
"	background-color: rgb(110, 220, 255);\n"
"}\n"
"\n"
"#btn_close_bar:pressed{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        btn_close_bar->setIcon(icon);
        lb_header = new QLabel(widget);
        lb_header->setObjectName(QString::fromUtf8("lb_header"));
        lb_header->setGeometry(QRect(923, 10, 40, 40));
        lb_header->setStyleSheet(QString::fromUtf8("border-image: url(:/res/header2.png);"));
        lb_user = new QLabel(widget);
        lb_user->setObjectName(QString::fromUtf8("lb_user"));
        lb_user->setGeometry(QRect(860, 10, 151, 40));
        QFont font6;
        font6.setPointSize(14);
        lb_user->setFont(font6);
        lb_user->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_account_bar = new QPushButton(widget);
        btn_account_bar->setObjectName(QString::fromUtf8("btn_account_bar"));
        btn_account_bar->setGeometry(QRect(0, 60, 120, 45));
        btn_account_bar->setFont(font5);
        btn_account_bar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\345\271\274\345\234\206\";\n"
"	color: rgb(255, 255, 255);\n"
"	border:0px;\n"
"	background-color: rgb(113, 157, 254);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(110, 220, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        btn_account_bar->setIcon(icon);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 4, 50, 50));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(://res/logo.png);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 3, 561, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\247\232\344\275\223"));
        font7.setPointSize(25);
        font7.setBold(true);
        font7.setWeight(75);
        label->setFont(font7);
        label->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.33 rgba(0, 0, 0, 255), stop:0.34 rgba(255, 30, 30, 255), stop:0.66 rgba(255, 0, 0, 255), stop:0.67 rgba(255, 255, 0, 255), stop:1 rgba(255, 255, 0, 255));"));
        btn_debt_bar = new QPushButton(widget);
        btn_debt_bar->setObjectName(QString::fromUtf8("btn_debt_bar"));
        btn_debt_bar->setGeometry(QRect(0, 150, 120, 45));
        btn_debt_bar->setFont(font5);
        btn_debt_bar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\345\271\274\345\234\206\";\n"
"	color: rgb(255, 255, 255);\n"
"	border:0px;\n"
"	background-color: rgb(113, 157, 254);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(110, 220, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        btn_debt_bar->setIcon(icon);
        btn_cal_bar = new QPushButton(widget);
        btn_cal_bar->setObjectName(QString::fromUtf8("btn_cal_bar"));
        btn_cal_bar->setGeometry(QRect(0, 195, 120, 45));
        btn_cal_bar->setFont(font5);
        btn_cal_bar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\345\271\274\345\234\206\";\n"
"	color: rgb(255, 255, 255);\n"
"	border:0px;\n"
"	background-color: rgb(113, 157, 254);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(110, 220, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        btn_cal_bar->setIcon(icon);
        btn_user_bar = new QPushButton(widget);
        btn_user_bar->setObjectName(QString::fromUtf8("btn_user_bar"));
        btn_user_bar->setGeometry(QRect(0, 240, 120, 45));
        btn_user_bar->setFont(font5);
        btn_user_bar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\345\271\274\345\234\206\";\n"
"	color: rgb(255, 255, 255);\n"
"	border:0px;\n"
"	background-color: rgb(113, 157, 254);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(110, 220, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        btn_user_bar->setIcon(icon);
        btn_me_bar = new QPushButton(widget);
        btn_me_bar->setObjectName(QString::fromUtf8("btn_me_bar"));
        btn_me_bar->setGeometry(QRect(0, 285, 120, 45));
        btn_me_bar->setFont(font5);
        btn_me_bar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\345\271\274\345\234\206\";\n"
"	color: rgb(255, 255, 255);\n"
"	border:0px;\n"
"	background-color: rgb(113, 157, 254);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(110, 220, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        btn_me_bar->setIcon(icon);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1073, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\350\264\246\347\233\256\344\277\241\346\201\257", nullptr));
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\264\246\347\233\256\347\274\226\350\276\221", nullptr));
        btn_mod_account->setText(QCoreApplication::translate("MainWindow", "\344\277\256 \346\224\271", nullptr));
        btn_add_account->setText(QCoreApplication::translate("MainWindow", "\345\275\225 \345\205\245", nullptr));
        le_uid_account->setText(QString());
        le_uid_account->setPlaceholderText(QString());
        lb_s6_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\350\264\246 \345\217\267:</span></p></body></html>", nullptr));
        lb_s6_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\346\227\245 \346\234\237:</span></p></body></html>", nullptr));
        le_money_account->setText(QString());
        le_money_account->setPlaceholderText(QString());
        lb_s6_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\351\207\221 \351\242\235:</span></p></body></html>", nullptr));
        le_item_account->setText(QString());
        le_item_account->setPlaceholderText(QString());
        lb_s6_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\345\210\206 \347\261\273:</span></p></body></html>", nullptr));
        rb_in_account->setText(QCoreApplication::translate("MainWindow", "\346\224\266\345\205\245", nullptr));
        rb_out_account->setText(QCoreApplication::translate("MainWindow", "\346\224\257\345\207\272", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\350\264\246\347\233\256\346\237\245\350\257\242", nullptr));
        lb_s6_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\346\227\245 \346\234\237:</span></p></body></html>", nullptr));
        lb_s6_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\350\264\246 \345\217\267\357\274\232</span></p></body></html>", nullptr));
        le_uid_account_query->setText(QString());
        le_uid_account_query->setPlaceholderText(QString());
        rb_in_account_query->setText(QCoreApplication::translate("MainWindow", "\346\224\266\345\205\245", nullptr));
        rb_out_account_query->setText(QCoreApplication::translate("MainWindow", "\346\224\257\345\207\272", nullptr));
        btn_query_account->setText(QCoreApplication::translate("MainWindow", "\346\237\245 \350\257\242", nullptr));
        lb_res_query->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_exec_budget->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214", nullptr));
        le_budget_budget->setText(QString());
        le_budget_budget->setPlaceholderText(QString());
        btn_set_budget->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        lb_s_fan_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\351\242\204\347\256\227\351\207\221\351\242\235\357\274\232</span></p></body></html>", nullptr));
        le_money_budget->setText(QString());
        le_money_budget->setPlaceholderText(QString());
        lb_s_fan_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\345\256\236\351\231\205\346\224\257\345\207\272\357\274\232</span></p></body></html>", nullptr));
        lb_s_fan_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        le_item_budget->setText(QString());
        le_item_budget->setPlaceholderText(QString());
        lb_s_fan_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\347\261\273\345\236\213\357\274\232</span></p></body></html>", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\345\200\272\345\212\241\347\274\226\350\276\221", nullptr));
        btn_add_debt->setText(QCoreApplication::translate("MainWindow", "\345\275\225    \345\205\245", nullptr));
        le_uid_debt->setText(QString());
        le_uid_debt->setPlaceholderText(QString());
        lb_s6_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\350\264\246 \345\217\267:</span></p></body></html>", nullptr));
        lb_s6_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\346\217\220\351\206\222\346\227\245:</span></p></body></html>", nullptr));
        le_money_debt->setText(QString());
        le_money_debt->setPlaceholderText(QString());
        lb_s6_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\351\207\221 \351\242\235:</span></p></body></html>", nullptr));
        le_item_debt->setText(QString());
        le_item_debt->setPlaceholderText(QString());
        lb_s6_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\345\210\206 \347\261\273:</span></p></body></html>", nullptr));
        le_day_debt->setText(QString());
        le_day_debt->setPlaceholderText(QString());
        lb_s6_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\350\277\230\346\254\276\350\256\241\345\210\222</span></p></body></html>", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "\345\200\272\345\212\241\344\277\241\346\201\257", nullptr));
        label_20->setText(QString());
        label_21->setText(QString());
        label_23->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\224\266\346\224\257\351\242\204\347\256\227\346\212\245\350\241\250", nullptr));
        label_22->setText(QString());
        lb_s_fan_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        btn_draw1_day->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\350\241\250\346\212\245", nullptr));
        label_25->setText(QString());
        lb_out->setText(QCoreApplication::translate("MainWindow", "\346\200\273\346\224\257\345\207\272", nullptr));
        lb_in->setText(QCoreApplication::translate("MainWindow", "\346\200\273\346\224\266\345\205\245", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\350\264\246\346\210\267\347\274\226\350\276\221", nullptr));
        btn_del_user->setText(QCoreApplication::translate("MainWindow", "\345\210\240    \351\231\244", nullptr));
        le_id_user->setText(QString());
        le_id_user->setPlaceholderText(QString());
        lb_s6_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\350\264\246 \345\217\267:</span></p></body></html>", nullptr));
        lb_s6_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\351\207\221 \351\242\235:</span></p></body></html>", nullptr));
        le_name_user->setText(QString());
        le_name_user->setPlaceholderText(QString());
        lb_s6_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\345\220\215 \347\247\260:</span></p></body></html>", nullptr));
        le_pwd_user->setText(QString());
        le_pwd_user->setPlaceholderText(QString());
        lb_s6_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\345\257\206 \347\240\201:</span></p></body></html>", nullptr));
        le_balance_user->setText(QString());
        le_balance_user->setPlaceholderText(QString());
        btn_add_user->setText(QCoreApplication::translate("MainWindow", "\346\267\273 \345\212\240", nullptr));
        btn_mod_user->setText(QCoreApplication::translate("MainWindow", "\344\277\256 \346\224\271", nullptr));
        btn_export_users->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\347\224\250\346\210\267\346\225\260\346\215\256", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "\350\264\246\346\210\267\344\277\241\346\201\257", nullptr));
        label_24->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        lb_s6_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\347\241\256\350\256\244\345\257\206\347\240\201:</span></p></body></html>", nullptr));
        lb_s6_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; font-weight:600;\">\345\257\206    \347\240\201:</span></p></body></html>", nullptr));
        btn_pwd_mod->setText(QCoreApplication::translate("MainWindow", "\344\277\256 \346\224\271 \345\257\206 \347\240\201", nullptr));
        le_pwd2_mod->setText(QString());
        le_pwd2_mod->setPlaceholderText(QString());
        le_pwd1_mod->setText(QString());
        le_pwd1_mod->setPlaceholderText(QString());
        btn_budget_bar->setText(QCoreApplication::translate("MainWindow", "\351\242\204\347\256\227\347\256\241\347\220\206", nullptr));
        btn_close_bar->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        lb_header->setText(QString());
        lb_user->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\347\256\241\347\220\206\345\221\230</span></p></body></html>", nullptr));
        btn_account_bar->setText(QCoreApplication::translate("MainWindow", "\350\264\246\347\233\256\347\256\241\347\220\206", nullptr));
        label_7->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; color:#ffff00;\">\344\270\252\344\272\272\350\256\260\350\264\246\346\234\254</span></p></body></html>", nullptr));
        btn_debt_bar->setText(QCoreApplication::translate("MainWindow", "\345\200\272\345\212\241\347\256\241\347\220\206", nullptr));
        btn_cal_bar->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\346\212\245\350\241\250", nullptr));
        btn_user_bar->setText(QCoreApplication::translate("MainWindow", "\350\264\246\346\210\267\347\256\241\347\220\206", nullptr));
        btn_me_bar->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
