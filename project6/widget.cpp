#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit_2->setInputMask("999");
    ui->lineEdit_3->setInputMask("999");
    ui->lineEdit_4->setInputMask("999");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
    name = ui->lineEdit->text();
    kor = ui->lineEdit_2->text().toInt();
    eng = ui->lineEdit_3->text().toInt();
    math = ui->lineEdit_4->text().toInt();
    total = kor + eng + math;
    avg = total /3;
    qDebug() << "이름      국어 영어 수학 총점 평균";
    qDebug() << name << " " << kor << " " << eng << " " << math << " " << total << " " << avg;
}

void Widget::on_pushButton_clicked()
{
    this->close();
}
