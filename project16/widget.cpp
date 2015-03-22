#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("W");
    ui->comboBox_2->addItem("S");
    ui->comboBox_3->addItem("A");
    ui->comboBox_4->addItem("D");
    ui->comboBox_5->addItem("Space Bar");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    this->close();
}
