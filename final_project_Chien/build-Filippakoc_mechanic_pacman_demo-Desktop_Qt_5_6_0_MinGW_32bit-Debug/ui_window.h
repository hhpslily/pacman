/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QGraphicsView *graphicsView;

    void setupUi(QDialog *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QStringLiteral("window"));
        window->resize(650, 480);
        window->setMinimumSize(QSize(450, 480));
        window->setMaximumSize(QSize(650, 480));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(85, 85, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        window->setPalette(palette);
        graphicsView = new QGraphicsView(window);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(90, 0, 450, 480));
        graphicsView->setMinimumSize(QSize(450, 480));
        graphicsView->setMaximumSize(QSize(640, 480));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        graphicsView->setBackgroundBrush(brush2);

        retranslateUi(window);

        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QDialog *window)
    {
        window->setWindowTitle(QApplication::translate("window", "Filippakoc_pacman_demo", 0));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
