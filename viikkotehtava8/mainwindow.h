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
    void timeout();


private slots:



    void on_time1_clicked();

    void on_time2_clicked();

    void on_startgame_clicked();

    void on_swtitchplayer_clicked();

    void on_switchplayer2_clicked();

    void on_stopgame_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short gameTime;
    void updateProgressBar();
    void setGameInfoText(QString, short);
    QTimer *timer;
    int progress1;
    int progress2;
    bool playerturn;
};
#endif // MAINWINDOW_H
