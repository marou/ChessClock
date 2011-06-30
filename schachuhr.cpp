#include "schachuhr.h"
#include "ui_schachuhr.h"

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

void Schachuhr::timefunction(timestruct *)
{

}
