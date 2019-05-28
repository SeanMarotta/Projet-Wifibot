#include "mainwindow.h"
#include "myrobot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    MyRobot* robot = new MyRobot();
    robot->doConnect();

    return a.exec();
}
