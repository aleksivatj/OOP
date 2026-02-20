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

void MainWindow::on_plusButton_clicked()
{
    if (tila == 2) {
        //haetaan num1
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        //haetaan num2
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " + " << num2;

        //lasketaan tulos
        result = num1 + num2;

        //kirjoitetaan tulos edittiin§
        QString r = QString::number(result);
        ui->resultEdit->setText(r);
        tila = 0;
        qDebug() << "nykyinen tila: " << tila;
    }
    setActiveControls();
}


void MainWindow::on_minusButton_clicked()
{
    if (tila == 2) {
        //haetaan num1
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();

        //haetaan num2
        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();
        qDebug() << num1 << " - " << num2;

        //lasketaan tulos
        result = num1 - num2;

        //kirjoitetaan tulos edittiin
        QString r = QString::number(result);
        ui->resultEdit->setText(r);
        tila = 0;
        qDebug() << "nykyinen tila: " << tila;
    }
    setActiveControls();
}

void MainWindow::setEditNumber(int num)
{
    QString lukunyt;
    if (tila == 0) {
        //tila 0 = kirjoitetaan num1
        qDebug() << "tila 0: kirjoitetaan num1";
        //lisää num1 kenttään numeron
        lukunyt = ui->num1Edit->text();
        lukunyt = lukunyt + QString::number(num);
        ui->num1Edit->setText(lukunyt);
    } else if (tila == 1) {
        qDebug() << "tila 1: kirjoitetaan num2";
        //tila 1 = kirjoitetaan num2
        lukunyt = ui->num2Edit->text();
        lukunyt = lukunyt + QString::number(num);
        ui->num2Edit->setText(lukunyt);
    } else {
        qDebug() << "vaara tila: ei vois syottaa numeroa";
    }
    setActiveControls();
}


void MainWindow::on_N1Button_clicked()
{
    setEditNumber(1);
}


void MainWindow::on_N2Button_clicked()
{
    setEditNumber(2);
}


void MainWindow::on_N3Button_clicked()
{
    setEditNumber(3);
}


void MainWindow::on_enterButton_clicked()
{
    qDebug() << "nykyinen tila: " << tila;
    //tilan vaihto
    if (tila == 0) {
        tila = 1;
    } else if (tila == 1) {
        tila = 2;
    }
    qDebug() << "Uusi tila: " << tila;
    setActiveControls();
}


void MainWindow::on_clearButton_clicked()
{
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();
    tila = 0;
    qDebug() << "Clear: palataan tilaan: " << tila;
    setActiveControls();
}


void MainWindow::on_N4Button_clicked()
{
    setEditNumber(4);
}


void MainWindow::on_N5Button_clicked()
{
    setEditNumber(5);
}


void MainWindow::on_N6Button_clicked()
{
    setEditNumber(6);
}


void MainWindow::on_N7Button_clicked()
{
    setEditNumber(7);
}


void MainWindow::on_N8Button_clicked()
{
    setEditNumber(8);
}


void MainWindow::on_N9Button_clicked()
{
    setEditNumber(9);
}


void MainWindow::on_N0Button_clicked()
{
    setEditNumber(0);
}

void MainWindow::setActiveControls()
{
    if (tila == 0) {
        qDebug() << "Tila 0 kontrollit";
        ui->plusButton->setEnabled(false);
        ui->minusButton->setEnabled(false);
        ui->N1Button->setEnabled(true);
        ui->N2Button->setEnabled(true);
        ui->N3Button->setEnabled(true);
    } else if (tila == 1) {
        qDebug() << "Tila 1 kontrollit";
        ui->plusButton->setEnabled(false);
        ui->minusButton->setEnabled(false);
        ui->N1Button->setEnabled(true);
        ui->N2Button->setEnabled(true);
        ui->N3Button->setEnabled(true);
    } else if (tila == 2) {
        qDebug() << "Tila 2 kontrollit";
        ui->plusButton->setEnabled(true);
        ui->minusButton->setEnabled(true);
        ui->N1Button->setEnabled(false);
        ui->N2Button->setEnabled(false);
        ui->N3Button->setEnabled(false);
    } else {
        qDebug() << "Mahdoton tila";
    }
}
