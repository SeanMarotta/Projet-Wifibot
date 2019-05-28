#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void connectedOnclick();
    void discoOnClick();

private:
    Ui::MainWindow *ui;
    MyRobot* robot;
};

#endif // MAINWINDOW_H
