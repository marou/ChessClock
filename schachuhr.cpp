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
    ui->player1Button->setDisabled(1);
    ui->player2Button->setEnabled(1);
    ui->ausgabe2->insertPlainText("\n");


    for(int i=0; i<4; i++)
    {
        zeit[i]=0;
    }


    while(1)
    {
        QString std, min, sec, msec, eitlab="";

        ui->ausgabe1->clear();

        std.setNum(zeit[3]);
        min.setNum(zeit[2]);
        sec.setNum(zeit[1]);
        msec.setNum(zeit[0]);

        eitlab.append(std);
        eitlab.append(":");
        eitlab.append(min);
        eitlab.append(":");
        eitlab.append(sec);
        eitlab.append(":");
        eitlab.append(msec);

        //QString::sprintf(zeit, "%s:%s:%s:%s", std,min,sec,msec);
        //ui->labelplayer1->setText(std,":",min,":",sec,":",msec);
        //ui->labelplayer1->setText(":");
        //ui->labelplayer1->setText(min);
        //ui->labelplayer1->setText(":");
        //ui->labelplayer1->setText(sec);
        //ui->labelplayer1->setText(":");
        //ui->labelplayer1->setText(msec);

        QTest::qWait(1);
        timefunction(zeit);

    }
}

void Schachuhr::on_player2Button_clicked()
{
    ui->player2Button->setDisabled(1);
    ui->player1Button->setEnabled(1);
    ui->ausgabe1->insertPlainText("\n");


    for(int i=0; i<4; i++)
    {
        zeit[i]=0;
    }

    while(1)
    {
        QString std, min, sec, msec;

        ui->ausgabe2->clear();

        std.setNum(zeit[3]);
        min.setNum(zeit[2]);
        sec.setNum(zeit[1]);
        msec.setNum(zeit[0]);

        ui->labelplayer2->setText(std);
        ui->labelplayer2->setText(":");
        ui->labelplayer2->setText(min);
        ui->labelplayer2->setText(":");
        ui->labelplayer2->setText(sec);
        ui->labelplayer2->setText(":");
        ui->labelplayer2->setText(msec);


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
