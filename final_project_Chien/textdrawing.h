#ifndef TEXTDRAWING_H
#define TEXTDRAWING_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
//#include <QTimer>
class Textdrawing : public QGraphicsItem
{
public:
    Textdrawing();
     QRectF boundingRect() const;
     void SetOver(bool over);
      void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
      bool over,playing;
      int x,y,w,h,score;

      QTimer *menuTimer;
      int button_mod;
      enum{START=1,CTRL=2,ABOUT=3,EXIT=4,SCORE=5,BACK=6};  // Enum參數, 代表按鈕
      int menuCount=4;
      QString btnImg[5];
      int btn_width;
      int btn_height;
};

#endif // TEXTDRAWING_H
