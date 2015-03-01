#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    ui->lineEdit->setText("Hello World");
}

void Dialog::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
}

void Dialog::on_pushButton_3_clicked()
{
    this->close();
}
