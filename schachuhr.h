#ifndef SCHACHUHR_H
#define SCHACHUHR_H

#include <QMainWindow>

namespace Ui {
    class Schachuhr;
}

class Schachuhr : public QMainWindow {
    Q_OBJECT
public:
    Schachuhr(QWidget *parent = 0);
    ~Schachuhr();



protected:
    void changeEvent(QEvent *e);

private:
    Ui::Schachuhr *ui;
    void timefunction(int *zeit); //Inkrementiert die Zeit
    void summenbildung(int *summe, int *zeit); //Soll die Summe bilden
    void init_summe(int *summe); //Initialisiert die Summenarrays

    int zeit[4];    //Zeit
    int summe1[4]; //Zeitsumme von Spieler1
    int summe2[4]; //Zeitsumme von Spieler2
    int zeitintervall; //Intervall für das Warten

    bool start;    //BOOL zum Überprüfen ob die Schachuhr noch läuft

    QString eitlab; //String für die Zeitausgabe




private slots:
    void on_stopButton_clicked(); //Stopt Schachuhr und gibt Summe aus
    void on_quitButton_clicked(); //Soll das Fenster schließen und die Anwendung killen
    void on_clearButton_clicked(); //Soll als Resetbutton dienen
    void on_player2Button_clicked(); //Button von Spieler 2
    void on_player1Button_clicked(); //Button von Spieler 1

};



#endif // SCHACHUHR_H
