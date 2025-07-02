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

    Number numb(x);
    QString buffer;
    QTextStream out(&buffer);
    numb.NotLargSumCub(out);

    ui->textBrowser->setText(buffer);

}


void MainWindow::on_pushButton_4_clicked()
{
    int x = ui->lineEdit->text().toInt();

    Number numb(x);
    QString buffer;
    QTextStream out(&buffer);
    numb.DublLarg(out);

    ui->textBrowser->setText(buffer);
}


void MainWindow::on_pushButton_3_clicked()
{
    int x = ui->lineEdit->text().toInt();
    int y = ui->lineEdit_2->text().toInt();

    Number numb(x, y);
    QString buffer;
    QTextStream out(&buffer);
    numb.SearchPrimeSumQuad(out);

    ui->textBrowser->setText(buffer);
}


void MainWindow::on_pushButton_5_clicked()
{
    int x = ui->lineEdit->text().toInt();

    Number numb(x);
    QString buffer;
    QTextStream out(&buffer);
    numb.FirstNoNullFactRight(out);

    ui->textBrowser->setText(buffer);
}

