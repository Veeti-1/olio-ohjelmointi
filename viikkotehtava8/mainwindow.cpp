#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);

    ui->aika1 -> setRange(0, 100); //asetetaan ranget 0-100
    ui->aika2->setRange(0,100);
    ui->aika1->setValue(0);
    ui->aika2->setValue(0);
      connect(timer, &QTimer::timeout, this, &MainWindow::timeout);
    setGameInfoText("select playtime and startgame",15);

}
void MainWindow::timeout(){
    if(playerturn && player1Time>0){
        player1Time--;
    }
    else if (!playerturn && player2Time > 0){
        player2Time--;
    }
    updateProgressBar();
}
void::MainWindow::setGameInfoText(QString text, short fontSize){
    ui->setgameinfotext->setText(text);
      ui->setgameinfotext->setStyleSheet(QString("font-size: %1px;").arg(fontSize));
}
 void MainWindow::updateProgressBar()
{
     progress1 = (player1Time*100)/gameTime;
    progress2 = (player2Time*100)/gameTime;
     ui->aika1->setValue(progress1);
    ui->aika2->setValue(progress2);
     if(player1Time == 0){
        timer->stop();
         setGameInfoText("player 2 won", 15);
     }
     if(player2Time==0){
         timer->stop();
         setGameInfoText("player 1 won", 15);
     }
}


void MainWindow::on_startgame_clicked()
{

    setGameInfoText("game ongoing",15);
    if(gameTime>0){
        player1Time = gameTime;
        player2Time = gameTime;
        playerturn = true;
        timer->start(1000);
    }

}

void MainWindow::on_time1_clicked()
{
    gameTime = 120;
    ui->aika1 -> setValue(100);//asetetaan pelaajan 1 progressbar 100:n
    ui->aika2 -> setValue(100);//asetetaan pelaajan 2 progressbar 100:n
    setGameInfoText("ready to play",15);
}

void MainWindow::on_time2_clicked()
{
    gameTime = 300;
    ui->aika1 -> setValue(100);//asetetaan pelaajan 1 progressbar 100:n
    ui->aika2 -> setValue(100);//asetetaan pelaajan 2 progressbar 100:n
    setGameInfoText("ready to play",15);
}

void MainWindow::on_swtitchplayer_clicked()
{
    if(playerturn){
        playerturn = false;

    }
}


void MainWindow::on_switchplayer2_clicked()
{
    if(!playerturn){
        playerturn = true;
    }
}


void MainWindow::on_stopgame_clicked()
{

    timer->stop();
    player1Time = 0;
    player2Time = 0;
    ui->aika1->setValue(0);
    ui->aika2->setValue(0);
    setGameInfoText("game over, restart to play",15);
}

MainWindow::~MainWindow()
{
    delete ui;
}
