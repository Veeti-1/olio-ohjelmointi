#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QList<QPushButton*> numbuttons = {ui->N0, ui->N1, ui->N2, ui->N3, ui->N4,
                                        ui->N5, ui->N6, ui->N7, ui->N8, ui->N9};
    for(QPushButton *btn : numbuttons){
        connect(btn, &QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    }
    QList<QPushButton*> operands = {ui->add, ui->sub, ui->mul, ui->div};
    for(QPushButton *btn : operands){
        connect(btn, &QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);

    }
   QList<QPushButton*> enterandclear = {ui->enter, ui->clear};
    for(QPushButton * btn:enterandclear){
       connect(btn, &QPushButton::clicked,this, &MainWindow::clearAndEnterClickHandler);
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::clearAndEnterClickHandler(){

    QPushButton *btn = qobject_cast<QPushButton*>(sender());

    if(btn->text() == "clear") {
        qDebug() << "Cleared";
        ui->num1->clear();
        ui->num2->clear();
        ui->result->clear();
        Number1.clear();
        Number2.clear();
        state = 1;

    }
    else if(btn->text() == "enter") {
        float number1 = Number1.toFloat();
        float number2 = Number2.toFloat();
        switch (operand) {
        case 0: tulos1 = number1 + number2; break;
        case 1: tulos1 = number1 - number2; break;
        case 2: tulos1 = number1 * number2; break;
        case 3:
            if(number2 != 0){
                tulos1 = number1 / number2;
            }
            if(number2 == 0 && number1 == 0){
            tulos1 = 0;
            }
            else {
                qDebug() << "Nollalla ei voi jakaa!";
                ui->result->setText("ERROR");
                return;
            }
            break;
        default: break;
        }
        ui->result->setText(QString::number(tulos1));
    }
}




void MainWindow::numberClickedHandler(){
    QPushButton *nappi = qobject_cast<QPushButton*>(sender());
    QString number = nappi->text();
    if(state ==1){

        Number1 +=number;
        ui->num1 ->setText(Number1);

    }
    else if (state == 2){
        Number2 +=number;
        ui->num2 ->setText(Number2);

    }



}

void MainWindow::addSubMulDivClickHandler(){
QPushButton *operandbtn = qobject_cast<QPushButton*>(sender());
    QString operaatio = operandbtn->text();

        if(operaatio== "+"){

            operand = 0;
            state = 2;
        }
        if(operaatio== "-"){

            operand = 1;
            state = 2;
        }
        if(operaatio== "*"){

            operand = 2;
            state = 2;
        }
        if(operaatio== "/"){

                operand = 3;
                state = 2;           
            }
            }





