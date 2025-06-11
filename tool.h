#ifndef TOOL_H
#define TOOL_H

#include <QLabel>
#include <QDebug>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextBrowser>
#include <QTableWidget>
#include <QTabWidget>
#include <QTableWidgetItem>
#include <QPushButton>
#include <QListWidget>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QHeaderView>
#include <QPlainTextEdit>
#include <QDateEdit>
#include <QComboBox>
#include <QLineEdit>

#define TL Tools::instance()

#define MOVE_EVENT_DECLARATION private: void mousePressEvent(QMouseEvent* e);\
    void mouseReleaseEvent(QMouseEvent* e);\
    void mouseMoveEvent(QMouseEvent* e); \
    bool m_pressed; QPoint m_pos

#define MOVE_EVENT_IMPLEMENT(className) void className::mousePressEvent(QMouseEvent *e){ \
    if(e->button() == Qt::LeftButton){m_pressed = true; m_pos = e->pos();}} \
    void className::mouseReleaseEvent(QMouseEvent *e){ \
        if(e->button() == Qt::LeftButton) m_pressed = false;} \
    void className::mouseMoveEvent(QMouseEvent *e){ \
        move(e->pos() - m_pos + pos());	}

#define MOVE_EVENT_STYLE setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint); \
    setAttribute(Qt::WA_TranslucentBackground)

class Tools
{
public:
    static Tools& instance()
    {
        static Tools instance;
        return instance;
    }

    Tools(Tools const&) = delete;
    void operator=(Tools const&) = delete;

    void InitTableView(QTableView *tableView, QSqlQueryModel *model, QStringList headers, QString sql)
    {
        model->setQuery(sql);
        tableView->setModel(model);
        tableView->verticalHeader()->hide();

        for(int i = 0; i < headers.size(); i++)
            model->setHeaderData(i, Qt::Horizontal, headers.at(i));
        tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }

    QString text(QWidget *ctr)
    {
        QString className = ctr->metaObject()->className();
        QString text;

        if(className == "QLineEdit")        text = ((QLineEdit*)ctr)->text();
        if(className == "QTextEdit")        text = ((QTextEdit*)ctr)->toPlainText();
        if(className == "QPlainTextEdit")   text = ((QPlainTextEdit*)ctr)->toPlainText();
        if(className == "QTimeEdit")        text = ((QTimeEdit*)ctr)->time().toString("hh:mm:ss");
        if(className == "QDateEdit")        text = ((QDateEdit*)ctr)->date().toString("yyyy-MM-dd");
        if(className == "QDateTimeEdit")    text = ((QDateTimeEdit*)ctr)->dateTime().toString("yyyy-MM-dd hh:mm:ss");
        if(className == "QTextBrowser")     text = ((QTextBrowser*)ctr)->toPlainText();
        if(className == "QComboBox")        text = ((QComboBox*)ctr)->currentText();

        return text;
    }

private:
    Tools() {}
};

#endif // TOOL_H
