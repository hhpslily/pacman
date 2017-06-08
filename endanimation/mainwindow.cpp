#include "mainwindow.h"
#include <QPixmap>
#include <QPainter>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(450,480);
    i=0;
    endimg[0]=":/Image/go4.png";
    endimg[1]=":/Image/go5.png";
    endimg[2]=":/Image/endanimation3.png";
    endimg[3]=":/Image/endanimation4.png";
    endimg[4]=":/Image/endanimation5.png";
    endimg[5]=":/Image/endanimation6.png";
    endimg[6]=":/Image/endanimation7.png";
    endimg[7]=":/Image/endanimation8.png";

    m1=new easyMusic("music/endmusic1.wav",70,1);
    m2=new easyMusic("music/endmusic2.wav",80,1);

    m1->play();
    m2->play();

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
    else if(i==4){
       pix.load(endimg[4]);
       painter.drawPixmap(0,0,450,480,pix);
       i++;
    }
    else if(i==5){
       pix.load(endimg[5]);
       painter.drawPixmap(0,0,450,480,pix);
       i++;
    }
    else if(i==6){
       pix.load(endimg[6]);
       painter.drawPixmap(0,0,450,480,pix);
       i++;
    }
    else {
       pix.load(endimg[7]);
       painter.drawPixmap(0,0,450,480,pix);
       i=0;
    }



}

MainWindow::~MainWindow()
{

}

