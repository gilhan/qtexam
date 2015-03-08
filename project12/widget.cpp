#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_horizontalScrollBar_valueChanged(int value)
{
    ui->label->setText(QString("%1").arg(value));
    ui->dial->setValue(value);
}

void Widget::on_horizontalSlider_valueChanged(int value)
{
    ui->label_2->setText(QString("%1").arg(value));
}

void Widget::on_verticalScrollBar_valueChanged(int value)
{
    ui->label_3->setText(QString("%1").arg(value));
}

void Widget::on_verticalSlider_valueChanged(int value)
{
    ui->label_4->setText(QString("%1").arg(value));
}
