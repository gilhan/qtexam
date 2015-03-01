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
    data = 100;
    qDebug() << data;
}

void Dialog::on_pushButton_2_clicked()
{
    data = 200;
    qDebug() << data;
}
