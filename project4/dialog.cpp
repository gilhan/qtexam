#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    int data1;
    int data2;

    data1 = 10;
    data2 = 3;

    qDebug() << "data1 + data2 = " << data1 + data2;
    qDebug() << "data1 - data2 = " << data1 - data2;
    qDebug() << "data1 * data2 = " << data1 * data2;
    qDebug() << "data1 / data2 = " << data1 / data2;
    qDebug() << "data1 % data2 = " << data1 % data2;

    qDebug() << QString("(data1 < 11) && (data2 > 2) = %1").arg((data1 < 11) && (data2 > 2));
    qDebug() << QString("(data1 < 11) || (data2 < 2) = %1").arg((data1 < 11) || (data2 < 2));
    qDebug() << QString("!(data1 < 11) = %1").arg(!(data1 < 11));
    qDebug() << QString("(data1 < 11) ^ (data2 < 2) = %1".arg((data1 < 11) ^ (data2 < 2));
}

Dialog::~Dialog()
{
    delete ui;
}
