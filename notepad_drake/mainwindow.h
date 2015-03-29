#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionSelect_Directory_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionQuit_triggered();

    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QDir dir;
    QFileInfoList list;
    QLabel *statuslabel;
};

#endif // MAINWINDOW_H
