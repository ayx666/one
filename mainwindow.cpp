#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //导入qss文件
    QFile file(":/url/3.qss");
    if(file.open(QFile::ReadOnly)){
        qDebug()<<"qss文件打开成功";
        QString sty=QString::fromLatin1(file.readAll());
        this->setStyleSheet(sty);
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
