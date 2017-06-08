#include <QPainter>
#include <QPixmap>
endpic::endpic(QWidget *parent) :QWidget(parent)
{
    this->setFixedSize(450,480);
    i=0;
    j=1;
    endimg[0]=":/Image/go4.png";
    endimg[1]=":/Image/go5.png";
    endimg[2]=":/Image/endanimation3.png";
    endimg[3]=":/Image/endanimation4.png";
    endimg[4]=":/Image/endanimation5.png";
    endimg[5]=":/Image/endanimation6.png";
    endimg[6]=":/Image/endanimation7.png";
    endimg[7]=":/Image/endanimation8.png";
    //endtimer=new QTimer(this);

   // connect(endtimer, SIGNAL(timeout()),this,SLOT(update()));
    //endtimer->start(100);

}
/*
void endpic::paintEvent(QPaintEvent *)
{

    int i=0,j=0;
    QPainter painter(this);
    QPixmap pix;
while(j<2){
    while(i<=7){
        //upload();
        pix.load(endimg[i]);
        painter.drawPixmap(0,0,450,480,pix);
        i++;

    }
    j++;
}

}*/

endpic:: ~endpic()
{

}
