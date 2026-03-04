#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setGameInfoText("Select playtime and press start game!", 15);
}

MainWindow::~MainWindow()
{
    if (timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_startBtn_clicked()
{
    setGameInfoText("Game ongoing", 15);
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    ui->progressBar1->setRange(0, gameTime);
    ui->progressBar2->setRange(0, gameTime);
    ui->progressBar1->setValue(gameTime);
    ui->progressBar2->setValue(gameTime);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this,
            &MainWindow::updateProgressBar);

    timer->setInterval(1000);
    timer->start();
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1) {
        if (p1Time == 0) {
            setGameInfoText("Player 2 won!!", 15);
        }
        p1Time--;
        ui->progressBar1->setValue(p1Time);
    }
    else {
        if (p2Time == 0) {
            setGameInfoText("Player 1 Won!!", 15);
        }
        p2Time--;
        ui->progressBar2->setValue(p2Time);
    }
}


void MainWindow::on_switchBtn1_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_switchBtn2_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_endBtn_clicked()
{
    setGameInfoText("New game via start button", 15);
    timer->stop();
    delete timer;
    timer = nullptr;
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
}


void MainWindow::on_time1Btn_clicked()
{
    gameTime = 120;
    setGameInfoText("Ready to play", 15);
}

void MainWindow::on_time2Btn_clicked()
{
    gameTime = 300;
    setGameInfoText("Ready to play", 15);
}

void MainWindow::setGameInfoText(QString text, int f)
{
    ui->infoLabel->setText(text);
    QFont font = ui->infoLabel->font();
    font.setPointSize(f);
    ui->infoLabel->setFont(font);
}






