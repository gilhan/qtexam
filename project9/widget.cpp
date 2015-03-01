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
    phr = "";
    if(ui->radioButton->isChecked())
        com = ui->radioButton->text();
    if(ui->radioButton_2->isChecked())
        com = ui->radioButton_2->text();
    if(ui->radioButton_3->isChecked())
        com = ui->radioButton_3->text();
    if(ui->radioButton_4->isChecked())
        com = ui->radioButton_4->text();
    if(ui->checkBox->isChecked())
        phr += ui->checkBox->text();
    if(ui->checkBox_2->isChecked())
        phr += ui->checkBox_2->text();
    if(ui->checkBox_3->isChecked())
        phr += ui->checkBox_3->text();
    if(ui->checkBox_4->isChecked())
        phr += ui->checkBox_4->text();
    ui->lineEdit->setText("당신은 " + com + "컴퓨터와 " + phr + "주변장치를 보유중입니다.");
}
