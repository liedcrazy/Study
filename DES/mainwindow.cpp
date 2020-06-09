#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "des.h"

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


void MainWindow::on_pushButton_clicked()
{
    Des d1;
  //  QString str=new char[1000];
  //  char *str1=new char[1000];
    ui->lineEdit_3->clear(); //чистка экрана
    //QString str = ui->lineEdit->text();
    //const char *cstr = ui->lineEdit->text().toStdString().c_str();
    ui->lineEdit_3->setText(d1.Encrypt(ui->lineEdit->text()));

}
