#include "animation.h"

animation::animation()
{
    open1.load(":/images/open1.png");
    open2.load(":/images/open2.png");
    open3.load(":/images/open3.png");
    open4.load(":/images/open4.png");
    open5.load(":/images/open5.png");
    close1.load(":/images/endanimation1.png");
    close2.load(":/images/endanimation2.png");
    close3.load(":/images/endanimation3.png");
    close4.load(":/images/endanimation4.png");
    close5.load(":/images/endanimation5.png");
    close6.load(":/images/endanimation6.png");
    close7.load(":/images/endanimation7.png");
    close8.load(":/images/endanimation8.png");
    anim_mod = OPEN;
    anim_state = 0;
}
QRectF animation::boundingRect() const
{
    return QRect(0,0,450,480);
}
void animation::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    switch (anim_mod) {
    case OPEN:
        if(anim_state<interval){
            painter->drawPixmap(0,0,450,480,open1);
        }else if(anim_state<interval*2){
            painter->drawPixmap(0,0,450,480,open2);
        }else if(anim_state<interval*3){
            painter->drawPixmap(0,0,450,480,open3);
        }else if(anim_state<interval*4){
            painter->drawPixmap(0,0,450,480,open4);
        }else if(anim_state<interval*5){
            painter->drawPixmap(0,0,450,480,open5);
        }
        break;
    case CLOSE:
        if(anim_state<interval){
            painter->drawPixmap(0,0,450,480,close1);
        }else if(anim_state<interval*2){
            painter->drawPixmap(0,0,450,480,close2);
        }else if(anim_state<interval*3){
            painter->drawPixmap(0,0,450,480,close3);
        }else if(anim_state<interval*4){
            painter->drawPixmap(0,0,450,480,close4);
        }else if(anim_state<interval*5){
            painter->drawPixmap(0,0,450,480,close5);
        }else if(anim_state<interval*6){
            painter->drawPixmap(0,0,450,480,close6);
        }else if(anim_state<interval*7){
            painter->drawPixmap(0,0,450,480,close7);
        }else if(anim_state<interval*8){
            painter->drawPixmap(0,0,450,480,close8);
        }
        break;
    }
}
void animation::advance()
{
    if(anim_mod==OPEN){
        if(anim_state>interval*5-2){
            anim_state = 0;
        }else{
            anim_state++;
        }
    }else if(anim_mod==CLOSE){
        if(anim_state>interval*8-2){
            this->setVisible(false);
        }else{
            anim_state++;
        }
    }
}
