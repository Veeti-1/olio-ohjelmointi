#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Reset_clicked()
{


   // QString str = QString::number(Number1);
    Number1 = 0;
    ui->lineEdit->setText(QString::number(Number1));
   // qDebug() << line;
}


void MainWindow::on_Count_clicked()
{
    Number1++;
    ui->lineEdit->setText(QString::number(Number1));

}


void MainWindow::on_pushButton_clicked()
{

}

