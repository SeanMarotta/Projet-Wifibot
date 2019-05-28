#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myrobot.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    robot = new MyRobot();
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectedOnclick(){
    robot->doConnect();
}

void MainWindow::discoOnClick(){
    robot->disConnect();
}
