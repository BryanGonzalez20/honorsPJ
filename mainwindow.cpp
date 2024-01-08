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

void MainWindow::on_MainWindow_iconSizeChanged(const QSize &iconSize)
{

}


void MainWindow::onMainWindowLoaded() {
    setStyleSheet("background-color: #F2F3F4;");
}

void MainWindow::on_BryanButton_clicked()
{
    ui->BryanLabel->setText("Bryan");
}

