#include "schachuhr.h"
#include "ui_schachuhr.h"
#include "timestruct.h"
#include <QTest>

Schachuhr::Schachuhr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Schachuhr)
{
    ui->setupUi(this);
    zeitintervall=1;
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
    if(!start)
    {
        init_summe(summe1);
        init_summe(summe2);
    }

    start=true;
    ui->player1Button->setDisabled(1);
    ui->player2Button->setEnabled(1);
    ui->ausgabe2->insertPlainText(eitlab);
    ui->ausgabe2->insertPlainText("\n");
    ui->labelplayer2->setText("Spieler 2");


    for(int i=0; i<4; i++)
    {
        zeit[i]=0;
    }


    while(start)
    {
        summenbildung(summe1, zeit);
        QString std, min, sec, msec;

        std.setNum(summe1[3]);
        min.setNum(summe1[2]);
        sec.setNum(summe1[1]);
        msec.setNum(summe1[0]);

        eitlab=std + ":" + min + ":" + sec +  ":" + msec;
        ui->sumedit1->setText(eitlab);

        std.setNum(zeit[3]);
        min.setNum(zeit[2]);
        sec.setNum(zeit[1]);
        msec.setNum(zeit[0]);

        eitlab=std + ":" + min + ":" + sec +  ":" + msec;
        ui->labelplayer1->setText(eitlab);

        QTest::qWait(1);
        timefunction(zeit);

    }
}

void Schachuhr::on_player2Button_clicked()
{
    if(!start)
    {
        init_summe(summe1);
        init_summe(summe2);
    }

    start=true;
    ui->player2Button->setDisabled(1);
    ui->player1Button->setEnabled(1);
    ui->ausgabe1->insertPlainText(eitlab);
    ui->ausgabe1->insertPlainText("\n");
    ui->labelplayer1->setText("Spieler 1");


    for(int i=0; i<4; i++)
    {
        zeit[i]=0;
    }

    while(start)
    {
        summenbildung(summe2, zeit);
        QString std, min, sec, msec;

        std.setNum(summe2[3]);
        min.setNum(summe2[2]);
        sec.setNum(summe2[1]);
        msec.setNum(summe2[0]);

        eitlab=std + ":" + min + ":" + sec +  ":" + msec;
        ui->sumedit2->setText(eitlab);

        std.setNum(zeit[3]);
        min.setNum(zeit[2]);
        sec.setNum(zeit[1]);
        msec.setNum(zeit[0]);

        eitlab=std + ":" + min + ":" + sec +  ":" + msec;
        ui->labelplayer2->setText(eitlab);

        QTest::qWait(zeitintervall);
        timefunction(zeit);
    }
}


void Schachuhr::on_clearButton_clicked()
{
    ui->ausgabe1->clear();
    ui->ausgabe2->clear();
}

void Schachuhr::on_quitButton_clicked()
{
    close();
}

void Schachuhr::on_stopButton_clicked()
{
    if(start)
    {
        bool stop;
        stop = ui->player1Button->isEnabled();
        if(stop)
        {
            ui->ausgabe2->insertPlainText(eitlab);
            ui->ausgabe2->insertPlainText("\n");
            ui->labelplayer2->setText("Spieler 2");
        }
        else
        {
            ui->ausgabe1->insertPlainText(eitlab);
            ui->ausgabe1->insertPlainText("\n");
            ui->labelplayer1->setText("Spieler 1");

        }

        start=false;
        ui->ausgabe1->insertPlainText("----------------");
        ui->ausgabe2->insertPlainText("----------------");

        ui->player1Button->setEnabled(1);
        ui->player2Button->setEnabled(1);
        ui->sumedit1->setText("");
        ui->sumedit2->setText("");

    }
}

void Schachuhr::timefunction(int *zeit)
{
    if(zeit[0]==100*zeitintervall)
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

void Schachuhr::init_summe(int *summe){
    for(int i=0; i<4; i++){
        summe[i]=0;
    }
}

void Schachuhr::summenbildung(int *summe, int *zeit){

    if(summe[0]>=1000*zeitintervall)
    {
        summe[0]=zeit[0];
        summe[1]++;
    }
    else
    {
        summe[0]+=zeit[0];
    }

    if(summe[1]>=60)
    {
        summe[1]=zeit[1];
        summe[2]++;
    }
    else
    {
        summe[1]+=zeit[1];
    }

    if(summe[2]>=60)
    {
          summe[2]=zeit[2];
          summe[3]++;
    }
    else
    {
        summe[2]+=zeit[2];
    }
}
