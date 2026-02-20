#include "mainwindow.h"
#include "ui_mainwindow.h"

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




void MainWindow::on_counterButton_clicked()
{
    //luetaan nykyinen luku
    QString luku = ui->countEdit->text();
    qDebug() << "nykyinen luku merkkijonona: " << luku;

    //muutetaan merkkijono kokonaisluvuksi
    int num = luku.toInt();
    qDebug() << "nykyinen luku kokonaislukuna: " << num;

    //lisätään lukuun 1
    num = num + 1;
    qDebug() << "Uusi luku kokonaislukuna " << num;

    //kirjoitetaan takaisin edittiin
    QString txt = QString::number(num);
    ui->countEdit->setText(txt);
}


void MainWindow::on_resetButton_clicked()
{
    QString txt = "0";
    ui->countEdit->setText(txt);
}

