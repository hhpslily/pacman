#include "textdrawing.h"

Textdrawing::Textdrawing()
{
    over=false;
    w=350;
    h=50;
    x=450/2-w/2;
    y=480/2-h/2;
    score=0;
    playing=false;
/* menu */
    btn_width = 185;
    btn_height = 172;
    btnImg[START] = ":/images/menu start.png";
    btnImg[CTRL] = ":/images/menu ctrl.png";
    btnImg[ABOUT] = ":/images/menu about.png";
    btnImg[EXIT] = ":/images/menu exit.png";
    /*
    menuTimer = new QTimer(this);
    connect(menuTimer, SIGNAL(timeout()), this, SLOT(update()));
    menuTimer->start(1000);
    */
    button_mod = START;
}

QRectF Textdrawing::boundingRect() const
{
    return QRect(x, y, w, h);
}

void Textdrawing::SetOver(bool over)
{
    this->over=over;
}

void Textdrawing::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::blue);
    painter->setPen(pen);
    QFont font=painter->font() ;
    QBrush brush(Qt::blue);
    painter->setBrush(brush);
    QPixmap btn;
    if(!playing){
        font.setPointSize ( 18 );
         painter->setFont(font);
        if(over){

             //painter->drawText( x+120,y-70, "GAME OVER." );
             painter->drawText( x+70,y-50, "PRESS SPACE TO PLAY." );
            painter->drawText( boundingRect(),Qt::AlignCenter, "SCORE : "+QString::number(score) );

        }else{
            //painter->drawText( boundingRect(),Qt::AlignCenter, "" );
            switch (button_mod) {
            case START:
                //update();
                btn.load(btnImg[START]);
                painter->drawPixmap(0,0,btn_width,btn_height,btn);
                break;
            case CTRL:
                //update();
                btn.load(btnImg[CTRL]);
                painter->drawPixmap(x+70,y-70,btn_width,btn_height,btn);
                break;
            case ABOUT:
                //update();
                btn.load(btnImg[ABOUT]);
                painter->drawPixmap(x+70,y-70,btn_width,btn_height,btn);
            case EXIT:
                //update();
                btn.load(btnImg[EXIT]);
                painter->drawPixmap(x+70,y-70,btn_width,btn_height,btn);
                break;
            default:
                break;
            }
        }
    }else{
        font.setPointSize ( 13 );
        painter->setFont(font);
         painter->drawText( 50,15, "SCORE : "+QString::number(score));
    }

}
