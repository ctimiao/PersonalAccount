#ifndef DB_H
#define DB_H

#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDir>
#include <QRandomGenerator>
#include <QDateTime>
#define DB Database::Instance()

class Database
{
public:
    static Database& Instance()
    {
        static Database instance;
        return instance;
    }

    Database(Database const&) = delete;
    void operator=(Database const&) = delete;

    void Insignificance() {}

    bool CheckId(QString id)
    {
        QString sql = QString("SELECT * FROM users WHERE id=%1").arg(id);
        QSqlQueryModel model;
        model.setQuery(sql);
        return model.rowCount() > 0;
    }

    QString FetchUserId(QString user, QString pwd)
    {
        QSqlQuery q;
        QString sql = QString("SELECT id FROM users WHERE user='%1' AND pwd='%2'").arg(user).arg(pwd);

        if (q.exec(sql))
        {
            if (q.next())
            {
                return q.value(0).toString();
            }
        }
        return QString();
    }

    QString CheckLogin(QString id, QString pwd)
    {
        QSqlQuery q;
        QString sql = QString("SELECT name FROM users WHERE id='%1' AND pwd='%2'").arg(id).arg(pwd);

        if (q.exec(sql))
        {
            if (q.next())
            {
                return q.value(0).toString();
            }
        }
        return QString();
    }

    QString listToString(QStringList list, QString separator)
    {
        QString ret;
        for(auto str : list)
        {
            if(!ret.isEmpty())
                ret += separator;
            ret += str;
        }
        return ret;
    }

    bool exec(QString sql)
    {
        QSqlQuery query;
        bool ret = query.exec(sql);

        if(!ret)
        {
            qDebug() << query.lastError();
            qDebug() << sql;
        }
        return ret;
    }

    bool insert(QString tableName, QStringList fields , QString val)
    {
        QSqlQuery query;

        QString arg1, arg2;
        for(auto field : fields)
        {
            if(!arg1.isEmpty())
                arg1 += ",";
            arg1 += field;
        }

        QString sql = QString("INSERT INTO %1(%2) VALUES(%3)").arg(tableName).arg(listToString(fields, ",")).arg(val);
        return exec(sql);

        if (!query.exec(sql)) {
                qDebug() << "Insert failed:" << query.lastError().text();
                qDebug() << sql;
                return false;
        }

        return true;
    }

    bool UpdateById(QString tableName, QString id, QString field, QString val, bool number = true)
    {
        QSqlQuery query;
        QString sql;

        if(number)
        {
            sql = QString("UPDATE %1 SET %2 = %3 WHERE id = %4").arg(tableName).arg(field).arg(val).arg(id);
        }
        else
        {
            sql = QString("UPDATE %1 SET %2 = %3 WHERE id = %4").arg(tableName).arg(field).arg(val).arg(id);
        }
        query.prepare(sql);
        query.addBindValue(val);
        query.addBindValue(id);

        return query.exec(sql);
    }

    bool UpdateUser(QString id, QString user, QString sign, QString pwd)
    {
        QSqlQuery query;
        QString sql;
        if(pwd.isEmpty())
            sql = QString("UPDATE users SET user='%1',signature='%2' WHERE id=%3").arg(user).arg(sign).arg(id);
        else
            sql = QString("UPDATE users SET user='%1',signature='%2',pwd='%3' WHERE id=%4").arg(user).arg(sign).arg(pwd).arg(id);
        
        if (!query.exec(sql))
        {
            qDebug() << query.lastError();
            return false;
        }
        return true;
    }

    void UpdatePwd(QString id, QString pwd)
    {
        QSqlQuery query;
        QString sql = QString("UPDATE users SET pwd='%2' WHERE id='%1'").arg(id).arg(pwd);
        qDebug() << sql;
        if (!query.exec(sql))
        {
            qDebug() << query.lastError();
        }
    }

    void AddUser(QString id, QString name, QString pwd)
    {
        QSqlQuery query;
        bool res = query.exec(QString("INSERT INTO users VALUES('%1', '%2', '%3', 0)").arg(id).arg(name).arg(pwd));
        if (!res)
        {
            qDebug() << query.lastError();
        }
    }

    double GetItemSum(QString type, QMap<QString, double> &map)
    {
        double sum = 0;
        QString sql = QString("SELECT item, SUM(money) AS total_money  FROM accounts WHERE type='%1' GROUP BY item;").arg(type);
        QSqlQuery query;
        if(query.exec(sql))
        {
            while (query.next())
            {
                QString item = query.value(0).toString();
                double money = query.value(1).toDouble();

                map.insert(item, money);
                sum += money;
            }
        }
        return sum;
    }

    double GetSpentCost(QString day, QString item)
    {
        double sum = 0;
        QString sql = QString("SELECT money FROM accounts WHERE item='%1' AND dt='%2'").arg(item).arg(day);
        QSqlQuery query;
        if(query.exec(sql))
        {
            while (query.next())
            {
                sum += query.value(0).toDouble();
            }
        }
        return sum;
    }

    double GetBudget(QString day, QString item)
    {
        double sum = 0;
        QString sql = QString("SELECT money FROM budgets WHERE item='%1' AND dt='%2'").arg(item).arg(day);
        QSqlQuery query;
        if(query.exec(sql))
        {
            while (query.next())
            {
                sum += query.value(0).toDouble();
            }
        }
        return sum;
    }

    double GetInOutByDay(QString day, QString type)
    {
        double sum = 0;
        QString sql = QString("SELECT money FROM accounts WHERE type='%1' AND dt='%2'").arg(type).arg(day);
        QSqlQuery query;
        if(query.exec(sql))
        {
            while (query.next())
            {
                sum += query.value(0).toDouble();
            }
        }
        return sum;
    }

    double GetBudgetByDay(QString day)
    {
        double sum = 0;
        QString sql = QString("SELECT money FROM budgets WHERE dt='%1'").arg(day);
        QSqlQuery query;
        if(query.exec(sql))
        {
            while (query.next())
            {
                sum += query.value(0).toDouble();
            }
        }
        return sum;
    }

private:
    Database()
    {
        bool isSqlite3 = true;
        if(isSqlite3)
        {
            m_db = QSqlDatabase::addDatabase("QSQLITE");

            m_db.setDatabaseName("database.db");
        }
        else
        {
            m_db.setPort(3306);
            m_db.setHostName("127.0.0.1");
            m_db.setUserName("root");
            m_db.setPassword("root");
        }

        if (!m_db.open())
        {
            qDebug() << "打开数据库错误";
            exit(-1);
        }

        if(isSqlite3)
        {
            QSqlQuery query;
            query.exec(QString("CREATE TABLE users ("
                "id TEXT PRIMARY KEY NOT NULL COLLATE NOCASE,"
                "name TEXT COLLATE NOCASE,"
                "pwd TEXT COLLATE NOCASE,"
                "balance real NOT NULL);"));

            m_model.setQuery("SELECT * FROM project");
            if (m_model.rowCount() < 2)
            {
                query.exec(QString("INSERT INTO users VALUES('demo', '管理员', '123123', 3000)"));
            }
            else
            {
                qDebug() << query.lastError();
            }

            query.exec(QString("CREATE TABLE accounts ("
                "id INTEGER PRIMARY KEY NOT NULL,"
                "uid TEXT NOT NULL,"
                "type TEXT NOT NULL,"
                "money real NOT NULL,"
                "item TEXT NOT NULL,"
                "dt TEXT NOT NULL);"));

            query.exec(QString("CREATE TABLE debts ("
                "id INTEGER PRIMARY KEY NOT NULL,"
                "uid TEXT NOT NULL,"
                "money real NOT NULL,"
                "item TEXT NOT NULL,"
                "plan TEXT NOT NULL,"
                "day TEXT NOT NULL);"));

            query.exec(QString("CREATE TABLE budgets ("
                "id INTEGER PRIMARY KEY NOT NULL,"
                "uid TEXT NOT NULL,"
                "budget TEXT NOT NULL,"
                "money REAL NOT NULL,"
                "item TEXT NOT NULL,"
                "dt TEXT NOT NULL);"));
        }
    }

public:
    QSqlDatabase m_db;
    QSqlQueryModel m_model;
    QString m_id;
    QString m_name;
};

#endif // DB_H
