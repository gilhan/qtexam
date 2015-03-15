#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene.addText("Hello");
    QPixmap pix("hello.png");
    scene.addPixmap(pix);
    ui->graphicsView->setScene(&scene);
    ui->graphicsView->show();
}

Widget::~Widget()
{
    delete ui;
}
