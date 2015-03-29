#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/drake/db/note.sqlite");
    if(!db.isOpen())
        db.open();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    db.close();
    this->close();
}

void Widget::on_pushButton_clicked()
{
    QSqlQuery query;
    query.clear();
    query.exec("Select date from note;");
    while(query.next())
    {
        QString date = query.value(0).toString();
        qWarning() << date;
    }
}

void Widget::on_calendarWidget_clicked(const QDate &date)
{
    qWarning() << date.toString();
}
