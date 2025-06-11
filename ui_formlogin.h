/********************************************************************************
** Form generated from reading UI file 'formlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOGIN_H
#define UI_FORMLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLogin
{
public:
    QWidget *widget_log;
    QStackedWidget *stackLR;
    QWidget *page_log;
    QPushButton *btn_log;
    QLineEdit *le_user_log;
    QLineEdit *le_pwd_user;
    QWidget *page_reg;
    QPushButton *btn_reg;
    QLineEdit *le_pwd1;
    QLineEdit *le_pwd2;
    QLineEdit *le_name_reg;
    QLineEdit *le_id_reg;
    QWidget *page_set_2;
    QPushButton *btn_quit;
    QPushButton *btn_log_sw;
    QPushButton *btn_reg_sw;
    QLabel *label_bg;

    void setupUi(QWidget *FormLogin)
    {
        if (FormLogin->objectName().isEmpty())
            FormLogin->setObjectName(QString::fromUtf8("FormLogin"));
        FormLogin->resize(1207, 770);
        widget_log = new QWidget(FormLogin);
        widget_log->setObjectName(QString::fromUtf8("widget_log"));
        widget_log->setGeometry(QRect(50, 40, 1081, 671));
        widget_log->setStyleSheet(QString::fromUtf8("#widget_log{\n"
"\n"
"}"));
        stackLR = new QStackedWidget(widget_log);
        stackLR->setObjectName(QString::fromUtf8("stackLR"));
        stackLR->setGeometry(QRect(180, 140, 811, 451));
        stackLR->setStyleSheet(QString::fromUtf8(""));
        page_log = new QWidget();
        page_log->setObjectName(QString::fromUtf8("page_log"));
        btn_log = new QPushButton(page_log);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setGeometry(QRect(220, 270, 291, 51));
        QFont font;
        font.setPointSize(14);
        btn_log->setFont(font);
        btn_log->setStyleSheet(QString::fromUtf8("#btn_log{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(26, 115, 232);\n"
"	border:2px solid rgb(26, 115, 232);\n"
"	border-radius:8px;\n"
"}\n"
"#btn_log:hover{\n"
"	color: rgb(26, 115, 232);\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"#btn_log:pressed{\n"
"	padding-top:5px;\n"
"	padding-left:5px;\n"
"}"));
        le_user_log = new QLineEdit(page_log);
        le_user_log->setObjectName(QString::fromUtf8("le_user_log"));
        le_user_log->setGeometry(QRect(220, 100, 291, 35));
        QFont font1;
        font1.setPointSize(12);
        le_user_log->setFont(font1);
        le_user_log->setStyleSheet(QString::fromUtf8("border:1px solid rgb(0,0,0);\n"
"border-radius:8px;\n"
"border-color: rgb(2, 198, 211);\n"
""));
        le_pwd_user = new QLineEdit(page_log);
        le_pwd_user->setObjectName(QString::fromUtf8("le_pwd_user"));
        le_pwd_user->setGeometry(QRect(220, 170, 291, 35));
        le_pwd_user->setFont(font1);
        le_pwd_user->setStyleSheet(QString::fromUtf8("border:1px solid rgb(0,0,0);\n"
"border-radius:8px;\n"
"border-color: rgb(2, 198, 211);\n"
""));
        le_pwd_user->setEchoMode(QLineEdit::Password);
        stackLR->addWidget(page_log);
        page_reg = new QWidget();
        page_reg->setObjectName(QString::fromUtf8("page_reg"));
        btn_reg = new QPushButton(page_reg);
        btn_reg->setObjectName(QString::fromUtf8("btn_reg"));
        btn_reg->setGeometry(QRect(260, 290, 291, 51));
        btn_reg->setFont(font);
        btn_reg->setStyleSheet(QString::fromUtf8("#btn_reg{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(26, 115, 232);\n"
"	border:2px solid rgb(26, 115, 232);\n"
"	border-radius:8px;\n"
"}\n"
"#btn_reg:hover{\n"
"	color: rgb(26, 115, 232);\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"#btn_reg:pressed{\n"
"	padding-top:5px;\n"
"	padding-left:5px;\n"
"}"));
        le_pwd1 = new QLineEdit(page_reg);
        le_pwd1->setObjectName(QString::fromUtf8("le_pwd1"));
        le_pwd1->setGeometry(QRect(260, 150, 291, 35));
        le_pwd1->setFont(font1);
        le_pwd1->setStyleSheet(QString::fromUtf8("border-color: rgb(2, 198, 211);\n"
"border:1px solid rgb(0,0,0);\n"
"border-radius:8px;\n"
"border-color: rgb(2, 198, 211);"));
        le_pwd1->setEchoMode(QLineEdit::Password);
        le_pwd2 = new QLineEdit(page_reg);
        le_pwd2->setObjectName(QString::fromUtf8("le_pwd2"));
        le_pwd2->setGeometry(QRect(260, 210, 291, 35));
        le_pwd2->setFont(font1);
        le_pwd2->setStyleSheet(QString::fromUtf8("border:1px solid rgb(0,0,0);\n"
"border-radius:8px;\n"
"border-color: rgb(2, 198, 211);"));
        le_pwd2->setEchoMode(QLineEdit::Password);
        le_name_reg = new QLineEdit(page_reg);
        le_name_reg->setObjectName(QString::fromUtf8("le_name_reg"));
        le_name_reg->setGeometry(QRect(260, 90, 291, 35));
        le_name_reg->setFont(font1);
        le_name_reg->setStyleSheet(QString::fromUtf8("border:1px solid rgb(0,0,0);\n"
"border-radius:8px;\n"
"border-color: rgb(2, 198, 211);\n"
""));
        le_id_reg = new QLineEdit(page_reg);
        le_id_reg->setObjectName(QString::fromUtf8("le_id_reg"));
        le_id_reg->setGeometry(QRect(260, 30, 291, 35));
        le_id_reg->setFont(font1);
        le_id_reg->setStyleSheet(QString::fromUtf8("border:1px solid rgb(0,0,0);\n"
"border-radius:8px;\n"
"border-color: rgb(2, 198, 211);\n"
""));
        stackLR->addWidget(page_reg);
        page_set_2 = new QWidget();
        page_set_2->setObjectName(QString::fromUtf8("page_set_2"));
        stackLR->addWidget(page_set_2);
        btn_quit = new QPushButton(widget_log);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(1060, 0, 21, 23));
        btn_quit->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_quit->setIcon(icon);
        btn_log_sw = new QPushButton(widget_log);
        btn_log_sw->setObjectName(QString::fromUtf8("btn_log_sw"));
        btn_log_sw->setGeometry(QRect(910, 600, 32, 32));
        btn_log_sw->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        btn_log_sw->setFont(font2);
        btn_log_sw->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_log_sw->setIcon(icon1);
        btn_log_sw->setIconSize(QSize(32, 32));
        btn_reg_sw = new QPushButton(widget_log);
        btn_reg_sw->setObjectName(QString::fromUtf8("btn_reg_sw"));
        btn_reg_sw->setGeometry(QRect(970, 600, 32, 32));
        btn_reg_sw->setMinimumSize(QSize(0, 20));
        btn_reg_sw->setFont(font2);
        btn_reg_sw->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/reg.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_reg_sw->setIcon(icon2);
        btn_reg_sw->setIconSize(QSize(32, 32));
        label_bg = new QLabel(widget_log);
        label_bg->setObjectName(QString::fromUtf8("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 1081, 671));
        label_bg->setStyleSheet(QString::fromUtf8("background-image: url(://res/bg.jpg);"));
        label_bg->raise();
        stackLR->raise();
        btn_quit->raise();
        btn_log_sw->raise();
        btn_reg_sw->raise();

        retranslateUi(FormLogin);

        stackLR->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FormLogin);
    } // setupUi

    void retranslateUi(QWidget *FormLogin)
    {
        FormLogin->setWindowTitle(QCoreApplication::translate("FormLogin", "Form", nullptr));
        btn_log->setText(QCoreApplication::translate("FormLogin", "\347\231\273    \345\275\225", nullptr));
        le_user_log->setPlaceholderText(QCoreApplication::translate("FormLogin", "\350\264\246\345\217\267\357\274\232", nullptr));
        le_pwd_user->setPlaceholderText(QCoreApplication::translate("FormLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_reg->setText(QCoreApplication::translate("FormLogin", "\346\263\250    \345\206\214", nullptr));
        le_pwd1->setPlaceholderText(QCoreApplication::translate("FormLogin", "\345\257\206\347\240\201\357\274\232", nullptr));
        le_pwd2->setPlaceholderText(QCoreApplication::translate("FormLogin", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        le_name_reg->setPlaceholderText(QCoreApplication::translate("FormLogin", "\345\220\215\347\247\260\357\274\232", nullptr));
        le_id_reg->setPlaceholderText(QCoreApplication::translate("FormLogin", "\350\264\246\345\217\267\357\274\232", nullptr));
        btn_quit->setText(QString());
#if QT_CONFIG(tooltip)
        btn_log_sw->setToolTip(QCoreApplication::translate("FormLogin", "\347\231\273\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_log_sw->setText(QString());
#if QT_CONFIG(tooltip)
        btn_reg_sw->setToolTip(QCoreApplication::translate("FormLogin", "\346\263\250\345\206\214", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_reg_sw->setText(QString());
        label_bg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormLogin: public Ui_FormLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOGIN_H
