#ifndef POWERBALL_H
#define POWERBALL_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

class PowerBall : public QGraphicsItem
{
public:
    PowerBall();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setpoints(QVector<QPoint> points);
    void drawballs(QPainter *painter);
    void removepoint(QPoint p);
    //void removeplus(QLine l);
    void generatePointPixmap();
    void changeGeometry() { prepareGeometryChange(); }

    int ballx,bally;
    int ballw,ballh;
    QVector<QPoint> points;
    //QVector<QLine> pplus;
    QPixmap pBallPix;
};

#endif // POWERBALL_H
