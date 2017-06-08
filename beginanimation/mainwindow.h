#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <easymusic.h>
#include <QTimer>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *);

private slots:

private:

    //void endup();
    void createend();

    int win_width;      // 視窗寬度
    int win_height;     // 視窗高度
    int i;
    easyMusic *m1;
    easyMusic *m2;
    easyMusic *m3;
    QTimer *timer;
    QString endimg[5];

};

#endif // MAINWINDOW_H
