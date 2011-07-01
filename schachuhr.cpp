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
        QString std, min, sec, msec;

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
        QString std, min, sec, msec;

        std.setNum(zeit[3]);
        min.setNum(zeit[2]);
        sec.setNum(zeit[1]);
        msec.setNum(zeit[0]);

        eitlab=std + ":" + min + ":" + sec +  ":" + msec;
        ui->labelplayer2->setText(eitlab);


        QTest::qWait(1);
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

    }
}

void Schachuhr::timefunction(int *zeit)
{
    if(zeit[0]==100)
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
