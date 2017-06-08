#ifndef PLUS_H
#define PLUS_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>

class OBSTACLE
        : public QWidget
{
    Q_OBJECT
public:
    explicit PLUS(QWidget *parent = 0);
    ~PLUS();

private:

protected:
    void paintEvent(QPaintEvent *);

};

#endif // PLUS_H
