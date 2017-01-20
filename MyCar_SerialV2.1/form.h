#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QPen>
#include <QBrush>
#include <QMouseEvent>
#include <QPixmap>
#include <QPoint>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

    enum Shape{Line,Rectangle,RoundRect,Ellipse,Polygon,Polyline,Points,Arc,Path,Text,Pixmap};
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void MyCarComeBack(quint16 x,quint16 y);
//    void mouseMoveEvent(QMouseEvent *);
//    void mouseReleaseEvent(QMouseEvent *);
signals:
    void MyCarClickedSignal(quint16,quint16);

private slots:
    void on_back_pushButton_clicked();

    void on_clear_pushButton_clicked();


private:
    Ui::Form *ui;

    QColor color;
    Qt::PenStyle style;
    Qt::PenCapStyle cap;
    Qt::PenJoinStyle join;
    quint8 value;

    Shape shape;
    QPen pen;
    QBrush brush;
    Qt::FillRule fillRule;

    QPixmap pix;
    QPoint lastPoint;
    QPoint endPoint,endPoint_1;

    quint16 PixMapWidth;
    quint16 PixMapHeight;
};

#endif // FORM_H
