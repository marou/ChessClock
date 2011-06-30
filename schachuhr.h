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
    void timefunction(int *zeit);
    int zeit[4];




private slots:
    void on_stopButton_clicked();
    void on_quitButton_clicked();
    void on_clearButton_clicked();
    void on_player2Button_clicked();
    void on_player1Button_clicked();

};



#endif // SCHACHUHR_H
