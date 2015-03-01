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
    singer = "";
    if(ui->radioButton->isChecked())
        age = "10대";
    if(ui->radioButton_2->isChecked())
        age = "20대";
    if(ui->radioButton_3->isChecked())
        age = "30대";
    if(ui->radioButton_4->isChecked())
        age = "40대";
    if(ui->radioButton_5->isChecked())
        age = "외계인";
    if(ui->checkBox->isChecked())
        singer += "소녀시대 ";
    if(ui->checkBox_2->isChecked())
        singer += "2ne1 ";
    if(ui->checkBox_3->isChecked())
        singer += "이선희 ";
    if(ui->checkBox_4->isChecked())
        singer += "걸스데이 ";
    if(ui->checkBox_5->isChecked())
        singer += "EXO ";
    ui->lineEdit->setText(age + "인 당신은 " + singer +"를 좋아하네요.");
}

void Widget::on_pushButton_2_clicked()
{
    ui->radioButton->setChecked(false);
    ui->radioButton_2->setChecked(false);
    ui->radioButton_3->setChecked(false);
    ui->radioButton_4->setChecked(false);
    ui->radioButton_5->setChecked(false);
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);
    ui->lineEdit->setText("");
}
