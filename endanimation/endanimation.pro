#-------------------------------------------------
#
# Project created by QtCreator 2016-06-16T14:54:43
#
#-------------------------------------------------

QT       += core gui
QT       +=multimedia
DESTDIR   =$$PWD
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = endanimation
TEMPLATE = app


SOURCES += main.cpp\
           mainwindow.cpp \
           easymusic.cpp

HEADERS  += mainwindow.h \
            easymusic.h

RESOURCES += \
    resource.qrc
