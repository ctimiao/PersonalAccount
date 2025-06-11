#include "mainwindow.h"
#include "formlogin.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormLogin w;
    w.show();
    return a.exec();
}





