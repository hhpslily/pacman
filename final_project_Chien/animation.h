#ifndef ANIMATION_H
#define ANIMATION_H


#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

class animation : public QGraphicsItem
{
public:
    animation();
    QRectF boundingRect() const;
    enum{OPEN=1, CLOSE=2};
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void advance();

    void changeGeometry() { prepareGeometryChange(); }

    QPixmap open1;
    QPixmap open2;
    QPixmap open3;
    QPixmap open4;
    QPixmap open5;
    QPixmap close1;
    QPixmap close2;
    QPixmap close3;
    QPixmap close4;
    QPixmap close5;
    QPixmap close6;
    QPixmap close7;
    QPixmap close8;

    int interval = 1;
    int anim_state;
    int anim_mod;
};

#endif // ANIMATION_H
