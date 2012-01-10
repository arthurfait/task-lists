#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Qt-interface-headers.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    ListOfTask newTaskList;

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
