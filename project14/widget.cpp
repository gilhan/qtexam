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

void Widget::on_pushButton_clicked()
{
    QString file = QFileDialog::getOpenFileName();
    ui->lineEdit->setText(file);
}

void Widget::on_pushButton_2_clicked()
{
    this->close();
}
