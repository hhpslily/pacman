#include "mainwindow.h"
#include <QPixmap>
#include <QPainter>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(450,480);
    i=0;
    endimg[0]=":/Image/open1.png";
    endimg[1]=":/Image/open2.png";
    endimg[2]=":/Image/open3.png";
    endimg[3]=":/Image/open4.png";
    endimg[4]=":/Image/open5.png";

    m1=new easyMusic("Sound/bs1.wav",70,1);
    m2=new easyMusic("Sound/bs2.wav",70,1);
    m3=new easyMusic("Sound/bs3.wav",70,1);

    m1->play();
    m2->play();
    m3->play();

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    timer->start(500);
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;

    if(i==0){
       pix.load(endimg[0]);
       painter.drawPixmap(0,0,450,480,pix);
       i++;
    }
    else if(i==1){
       pix.load(endimg[1]);
       painter.drawPixmap(0,0,450,480,pix);
       i++;
    }
    else if(i==2){
       pix.load(endimg[2]);
       painter.drawPixmap(0,0,450,480,pix);
       i++;
    }
    else if(i==3){
       pix.load(endimg[3]);
       painter.drawPixmap(0,0,450,480,pix);
       i++;
    }
    else{
       pix.load(endimg[4]);
       painter.drawPixmap(0,0,450,480,pix);
       i=0;
    }
}

MainWindow::~MainWindow()
{

}

