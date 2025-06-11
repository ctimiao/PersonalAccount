QT       += core gui sql
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
RC_ICONS = logo.ico

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    formlogin.cpp \
    mainwindow.cpp

HEADERS += \
    tool.h \
    database.h \
    formlogin.h \
    mainwindow.h

FORMS += \
    formlogin.ui \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
