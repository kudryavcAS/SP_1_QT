#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include "number.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->setValidator(new QIntValidator(0, 32768, this));
    ui->lineEdit_2->setValidator(new QIntValidator(0, 32768, this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    int x = ui->lineEdit->text().toInt();

    Number numb;
    QString buffer;
    QTextStream out(&buffer);
    numb.NotLargSumCub(out, x);

    ui->textBrowser->setText(buffer);

}


void MainWindow::on_pushButton_4_clicked()
{
    int x = ui->lineEdit->text().toInt();

    Number numb;
    QString buffer;
    QTextStream out(&buffer);
    numb.DublLarg(out, x);

    ui->textBrowser->setText(buffer);
}


void MainWindow::on_pushButton_3_clicked()
{
    int x = ui->lineEdit->text().toInt();
    int y = ui->lineEdit_2->text().toInt();

    Number numb;
    QString buffer;
    QTextStream out(&buffer);
    numb.SearchPrimeSumQuad(out,x ,y);

    ui->textBrowser->setText(buffer);
}


void MainWindow::on_pushButton_5_clicked()
{
    int x = ui->lineEdit->text().toInt();

    Number numb;
    QString buffer;
    QTextStream out(&buffer);
    numb.FirstNoNullFactRight(out, x);

    ui->textBrowser->setText(buffer);
}

