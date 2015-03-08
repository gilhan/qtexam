#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(tupdate()));
    timer->start(1000);
}

int Widget::tupdate()
{
    QDateTime local(QDateTime::currentDateTime());
    ui->label_3->setText(local.toString());
    return 0;
}

Widget::~Widget()
{
    delete timer;
    delete ui;
}
