#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_4_clicked()
{
    dir = QFileDialog::getExistingDirectory();
    dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    ui->listWidget->clear();
    list = dir.entryInfoList();
    for (int i = 0; i < list.size(); ++i) {
        QFileInfo fileInfo = list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));
    }
}

void Widget::on_pushButton_clicked()
{
    QString path, filename;
    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    ui->textEdit->clear();
    ui->textEdit->append(file.readAll());
    file.close();
    QMessageBox msgbox;
    msgbox.setText("File Opened");
    msgbox.exec();
}

void Widget::on_pushButton_2_clicked()
{
    QString path, filename;
    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
    QFile file(filename + ".text");
    QByteArray bytearray = ui->textEdit->toPlainText().toUtf8().left(ui->textEdit->toPlainText().length());
    file.open(QIODevice::WriteOnly);
    file.write(bytearray);
    file.close();
    QMessageBox msgbox;
    msgbox.setText("File Saved");
    msgbox.exec();
}

void Widget::on_pushButton_3_clicked()
{
    this->close();
}

void Widget::on_listWidget_doubleClicked(const QModelIndex &index)
{
    QString path, filename;
    filename = QString("%1").arg(list.at(index.row()).absoluteFilePath());
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    ui->textEdit->clear();
    ui->textEdit->append(file.readAll());
    file.close();
}
