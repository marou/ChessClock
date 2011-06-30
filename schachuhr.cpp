#include "schachuhr.h"
#include "ui_schachuhr.h"
#include "timestruct.h"
#include <QTest>

Schachuhr::Schachuhr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Schachuhr)
{
    ui->setupUi(this);
}

Schachuhr::~Schachuhr()
{
    delete ui;
}

void Schachuhr::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Schachuhr::on_player1Button_clicked()
{
    for(int i=0; i<4; i++)
    {
        zeit[i]=0;
    }


    while(1)
    {
        QString std, min, sec, msec;

        ui->ausgabe1->clear();

        std.setNum(zeit[3]);
        min.setNum(zeit[2]);
        sec.setNum(zeit[1]);
        msec.setNum(zeit[0]);

        ui->ausgabe1->insertPlainText(std);
        ui->ausgabe1->insertPlainText(":");
        ui->ausgabe1->insertPlainText(min);
        ui->ausgabe1->insertPlainText(":");
        ui->ausgabe1->insertPlainText(sec);
        ui->ausgabe1->insertPlainText(":");
        ui->ausgabe1->insertPlainText(msec);
        ui->ausgabe1->insertPlainText("\n");

        QTest::qWait(1);
        timefunction(zeit);
    }
}

void Schachuhr::on_player2Button_clicked()
{

}


void Schachuhr::on_clearButton_clicked()
{
    ui->ausgabe1->clear();
    ui->ausgabe2->clear();
}

void Schachuhr::on_quitButton_clicked()
{

}

void Schachuhr::on_stopButton_clicked()
{

}

void Schachuhr::timefunction(int *zeit)
{
    if(zeit[0]==1000)
    {
        zeit[1]++;
        zeit[0]=0;

        if(zeit[1]==60)
        {
          zeit[2]++;
          zeit[1]=0;

          if(zeit[2]==60)
          {
              zeit[3]++;
              zeit[2]==0;
          }
        }
    }
    else
    {
        zeit[0]++;
    }
}
