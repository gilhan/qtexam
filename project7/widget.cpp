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
    sum = 0;
    if(ui->checkBox->isChecked())
        sum += 650000;
    if(ui->checkBox_2->isChecked())
        sum += 550000;
    if(ui->checkBox_3->isChecked())
        sum += 150000;
    if(ui->checkBox_4->isChecked())
        sum += 250000;
    ui->lineEdit->setText(QString::number(sum));
}

void Widget::on_pushButton_2_clicked()
{
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->lineEdit->setText("");
}
