#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 设置窗口标题...
    this->setWindowTitle("SimpleDesktopTool");


}

MainWindow::~MainWindow()
{
    delete ui;
}
