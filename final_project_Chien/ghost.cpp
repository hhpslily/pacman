#include "ghost.h"

Ghost::Ghost()
{
    animestate=0;

    gosx=450/2;
    gosy=480/2-20;

    direction=1;
    is_Scared=false;
    whiteb=false;
    right1.load(":/images/bug1-1-1.png");
    right2.load(":/images/bug1-1-1.png");
    up1.load(":/images/bug1-2-1.png");
    up2.load(":/images/bug1-2-1.png");
    down1.load("::/images/bug1-3-1.png");
    down2.load(":/images/bug1-3-1.png");
    left1.load(":/images/bug1-1-1.png");
    left2.load(":/images/bug1-1-1.png");
    scareb.load(":/images/bug3-1-1.png");
    scareb1.load(":/images/bug3-2-1.png");
    scarew.load(":/images/bug3-3-1.png");
    scarew1.load(":/images/bug3-1-1.png");
    //this->mapToScene(0,0,30,30);

}

QRectF Ghost::boundingRect() const
{
    return QRect(gosx-15,gosy-15,20,20);
}

void Ghost::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
//    painter->setOpacity(0.3);
    if(!is_Scared){
        switch(direction){
            case 1:
                if(animestate==0){
                    painter->drawPixmap(gosx-15,gosy-15,50,50,left1);
                }else{
                    painter->drawPixmap(gosx-15,gosy-15,50,50,left2);
                }
                break;
            case 4:
                if(animestate==0){
                    painter->drawPixmap(gosx-15,gosy-15,50,50,right1);
                }else{
                    painter->drawPixmap(gosx-15,gosy-15,50,50,right2);
                }
                break;
            case 3:
                if(animestate==0){
                    painter->drawPixmap(gosx-15,gosy-15,50,50,down1);
                }else{
                    painter->drawPixmap(gosx-15,gosy-15,50,50,down2);
                }
                break;
            case 2:
                if(animestate==0){
                    painter->drawPixmap(gosx-15,gosy-15,50,50,up1);
                }else{
                    painter->drawPixmap(gosx-15,gosy-15,50,50,up2);
                }
                break;
        }
    }else{
        if(whiteb){
            if(animestate==0){
                painter->drawPixmap(gosx-15,gosy-15,50,50,scareb);
            }else{
                painter->drawPixmap(gosx-15,gosy-15,50,50,scarew1);
            }
        }else{
            if(animestate==0){
                painter->drawPixmap(gosx-15,gosy-15,50,50,scareb);
            }else{
                painter->drawPixmap(gosx-15,gosy-15,50,50,scareb1);
            }
        }

    }

}

void Ghost::advance()
{
    if(animestate>2){
        animestate=0;
    }else{
        animestate++;
    }
}

void Ghost::setgosx(int x)
{
    gosx=x;
}

void Ghost::setgosy(int y)
{
    gosy=y;
}

void Ghost::setDirection(int dir)
{
    direction=dir;
}

void Ghost::setColor(QString col)
{
    if(col=="blue"){
        right1.load(":/images/bug1-1-1.png");
        right2.load(":/images/bug1-1-1.png");
        up1.load(":/images/bug1-2-1.png");
        up2.load(":/images/bug1-2-1.png");
        down1.load(":/images/bug1-3-1.png");
        down2.load(":/images/bug1-3-1.png");
        left1.load(":/images/bug1-1-1.png");
        left2.load(":/images/bug1-1-1.png");
    }else if(col=="orange"){
        right1.load(":/images/bug2-1-1.png");
        right2.load(":/images/bug2-1-1.png");
        up1.load(":/images/bug2-2-1.png");
        up2.load(":/images/bug2-2-1.png");
        down1.load(":/images/bug2-3-1.png");
        down2.load(":/images/bug2-3-1.png");
        left1.load(":/images/bug2-1-1.png");
        left2.load(":/images/bug2-1-1.png");
    }else if(col=="red"){
        right1.load(":/images/bug4-1-1.png");
        right2.load(":/images/bug4-1-1.png");
        up1.load(":/images/bug4-2-1.png");
        up2.load(":/images/bug4-2-1.png");
        down1.load(":/images/bug4-3-1.png");
        down2.load(":/images/bug4-3-1.pngg");
        left1.load(":/images/bug4-1-1.png");
        left2.load(":/images/bug4-1-1.png");
    }
}
