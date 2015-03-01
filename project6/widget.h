#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

    QString name;
    int kor;
    int eng;
    int math;

    int total;
    int avg;
};

#endif // WIDGET_H
