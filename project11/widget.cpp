#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("마포구");
    ui->comboBox->addItem("종로구");
    ui->comboBox->addItem("강남구");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_comboBox_currentIndexChanged(int index)
{
    if(index == 0)
    {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("연남동");
        ui->comboBox_2->addItem("서교동");
        ui->comboBox_2->addItem("동교동");
    }
    if(index == 1)
    {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("삼청동");
        ui->comboBox_2->addItem("사직동");
        ui->comboBox_2->addItem("계동");
    }
    if(index == 2)
    {
        ui->comboBox_2->clear();
        ui->comboBox_2->addItem("신사동");
        ui->comboBox_2->addItem("논현동");
        ui->comboBox_2->addItem("도곡동");
    }
}

void Widget::on_comboBox_2_currentIndexChanged(int index)
{
    ui->lineEdit->setText("선택된 주소는 " + ui->comboBox->currentText() + " " + ui->comboBox_2->currentText() + "입니다.");
}
