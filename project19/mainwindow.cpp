#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName("/home/drake/db/note.sqlite");
    if (!sdb.open())
    {
        qDebug() << sdb.lastError().text();

        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setText(sdb.lastError().text());
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionClose_triggered()
{
    this->close();
}
