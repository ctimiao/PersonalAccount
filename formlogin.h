#ifndef FORMLOGIN_H
#define FORMLOGIN_H

#include <QWidget>
#include "database.h"
#include "tool.h"
#include "mainwindow.h"

namespace Ui {class FormLogin;}

class FormLogin : public QWidget
{
    Q_OBJECT

public:
    explicit FormLogin(QWidget *parent = nullptr);
    ~FormLogin();

private slots:
    void on_btn_reg_clicked();

    void on_btn_log_clicked();

    void on_btn_log_sw_clicked();

    void on_btn_reg_sw_clicked();

    void on_btn_quit_clicked();

    MOVE_EVENT_DECLARATION;

private:
    Ui::FormLogin *ui;
    MainWindow* m_main;
};

#endif // FORMLOGIN_H
