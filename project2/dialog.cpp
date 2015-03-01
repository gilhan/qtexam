#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    dataint = 32767;
    qDebug() << dataint;
    datadou = 32.767;
    qDebug() << datadou;
    databoo = true;
    qDebug() << databoo;
    datastr = "OK!";
    qDebug() << datastr;
}

Dialog::~Dialog()
{
    delete ui;
}
