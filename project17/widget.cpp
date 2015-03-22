#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(tupdate()));
    tick = 0;
    timer->start(10);
}

int Widget::tupdate()
{
    if(tick == 100) ui->label->setText("Loading Complete");
    if(tick < 100) tick++;
    ui->progressBar->setValue(tick);
}

Widget::~Widget()
{
    delete ui;
}
