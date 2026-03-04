#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startBtn_clicked();
    void updateProgressBar();
    void on_switchBtn1_clicked();
    void on_switchBtn2_clicked();
    void on_endBtn_clicked();
    void on_time1Btn_clicked();
    void on_time2Btn_clicked();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    QTimer *timer = nullptr;
    void setGameInfoText(QString, int);
};
#endif // MAINWINDOW_H
