#ifndef ENDPIC_H
#define ENDPIC_H

#include <QWidget>
#include <QTimer>

class endpic :public QWidget
{
    Q_OBJECT
public:
    endpic(QWidget *parent=0);
    ~endpic();

protected:
    void paintEvent(QPaintEvent *);

private:
    QTimer *endtimer;
    //paintEvent(QPaintEvent *);//繪製圖片
    int i;
    int j;
    QString endimg[8];
};

#endif // ENDPIC_H
