#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QChart>
#include <QLineSeries>
#include <QtMath>
#include <QValueAxis>
#include <QMouseEvent>
#include <QPoint>
#include <QtCharts>
#include "tool.h"
#include "database.h"
#define OK(str) QMessageBox::information(this, "提示", str)
#define ERR(str) QMessageBox::critical(this, "警告", str)

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void InitNav();

    void InitAccountView();

    void InitBudget();

    void InitDebt();

    void InitUser();

    void InitBudgetChart();

    void InitStatChart();

    void InitPersonal();

    void SetUser();

    MOVE_EVENT_DECLARATION;

private slots:
    void on_btn_export_users_clicked();

private:
    Ui::MainWindow *ui;

    QSqlQueryModel *m_modelAccount;
    QSqlQueryModel *m_modelBudget;
    QSqlQueryModel *m_modelDebt;
    QSqlQueryModel *m_modelUser;

    QSqlQuery m_q;

    QChart *m_chart1 = nullptr;
    QChart *m_chart2 = nullptr;
    QChart *m_chart3 = nullptr;

    QBarSeries *m_barSeries;
    QBarSet *m_barIn;
    QBarSet *m_barOut;
    QBarSet *m_barBudget;

    QPieSeries *m_series2;
    QPieSeries *m_series3;
};
#endif // MAINWINDOW_H
