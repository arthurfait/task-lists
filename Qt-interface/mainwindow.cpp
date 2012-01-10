#include "Qt-interface-headers.h"

void processingInput(Ui::MainWindow* ui, ListOfTask newTaskList)
{
    QString buff = ui->lineEdit->text();
    bool result = newTaskList.AddNewTask(buff.toStdString());

    if (result)
    {
        ui->listWidget->insertItem(ui->listWidget->count(), buff);
        ui->lineEdit->setText("");
    }
    else
        ui->lineEdit->setText("Error!!!");
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //newTaskList ();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    processingInput(ui, newTaskList);
}

void MainWindow::on_lineEdit_returnPressed()
{
    processingInput(ui, newTaskList);
}
