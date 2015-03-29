#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSql/QtSql>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::Widget *ui;
    QSqlDatabase db;
};

#endif // WIDGET_H
