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

void Widget::on_calendarWidget_clicked(const QDate &date)
{
    qWarning() << date.toString();
}

void Widget::on_pbOpen_clicked()
{
    QSqlQuery query;
    QString exeq;

    int exist = 0;

    query.clear();
    exeq = "select * from note where date ='" + ui->calendarWidget->selectedDate().toString() + "';";
    query.exec(exeq);
    while(query.next())
    {
        QString date = query.value(0).toString();
        ui->leTitle->setText(query.value("title").toString());
        ui->teContent->clear();
        ui->teContent->appendPlainText(query.value("content").toString());
        exist = 1;
    }
    if(!exist)
        qWarning() << "None";
}

void Widget::on_pbExit_clicked()
{
    db.close();
    this->close();
}

void Widget::on_pbSave_clicked()
{
    QSqlQuery query;
    QString exeq;

    query.clear();
    exeq = "insert into note (date, title, content) values ('" + ui->calendarWidget->selectedDate().toString()+"', '"+ui->leTitle->text()+"', '"+ui->teContent->toPlainText()+"');";
}
