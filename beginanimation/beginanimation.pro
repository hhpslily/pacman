#-------------------------------------------------
#
# Project created by QtCreator 2016-06-17T03:23:42
#
#-------------------------------------------------

QT       += core gui
QT       +=multimedia
DESTDIR   =$$PWD
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = beginanimation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    easymusic.cpp

HEADERS  += mainwindow.h \
    easymusic.h

FORMS    += mainwindow.ui

DISTFILES +=

RESOURCES += \
    resource.qrc
