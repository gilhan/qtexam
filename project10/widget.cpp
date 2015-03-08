#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->addItem("효린");
    ui->listWidget->addItem("유카리");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ui->listWidget->addItem(ui->lineEdit->text());
    ui->lineEdit->setText("");
}
