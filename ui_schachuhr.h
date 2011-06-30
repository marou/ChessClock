/********************************************************************************
** Form generated from reading UI file 'schachuhr.ui'
**
** Created: Thu Jun 30 18:38:43 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHACHUHR_H
#define UI_SCHACHUHR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schachuhr
{
public:
    QWidget *centralWidget;
    QPushButton *clearButton;
    QPushButton *quitButton;
    QLabel *labelplayer2;
    QPlainTextEdit *ausgabe2;
    QLineEdit *sumedit2;
    QPushButton *stopButton;
    QPushButton *player2Button;
    QLabel *labelplayer1;
    QPlainTextEdit *ausgabe1;
    QLineEdit *sumedit1;
    QPushButton *player1Button;

    void setupUi(QMainWindow *Schachuhr)
    {
        if (Schachuhr->objectName().isEmpty())
            Schachuhr->setObjectName(QString::fromUtf8("Schachuhr"));
        Schachuhr->resize(699, 798);
        centralWidget = new QWidget(Schachuhr);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(133, 413, 85, 27));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(224, 413, 85, 27));
        labelplayer2 = new QLabel(centralWidget);
        labelplayer2->setObjectName(QString::fromUtf8("labelplayer2"));
        labelplayer2->setGeometry(QRect(353, 68, 133, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelplayer2->setFont(font);
        labelplayer2->setAlignment(Qt::AlignCenter);
        ausgabe2 = new QPlainTextEdit(centralWidget);
        ausgabe2->setObjectName(QString::fromUtf8("ausgabe2"));
        ausgabe2->setGeometry(QRect(354, 107, 256, 192));
        sumedit2 = new QLineEdit(centralWidget);
        sumedit2->setObjectName(QString::fromUtf8("sumedit2"));
        sumedit2->setGeometry(QRect(354, 305, 129, 27));
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(133, 378, 85, 27));
        player2Button = new QPushButton(centralWidget);
        player2Button->setObjectName(QString::fromUtf8("player2Button"));
        player2Button->setGeometry(QRect(401, 339, 85, 27));
        labelplayer1 = new QLabel(centralWidget);
        labelplayer1->setObjectName(QString::fromUtf8("labelplayer1"));
        labelplayer1->setGeometry(QRect(87, 68, 133, 32));
        labelplayer1->setFont(font);
        labelplayer1->setLayoutDirection(Qt::LeftToRight);
        labelplayer1->setAlignment(Qt::AlignCenter);
        ausgabe1 = new QPlainTextEdit(centralWidget);
        ausgabe1->setObjectName(QString::fromUtf8("ausgabe1"));
        ausgabe1->setGeometry(QRect(88, 107, 256, 192));
        sumedit1 = new QLineEdit(centralWidget);
        sumedit1->setObjectName(QString::fromUtf8("sumedit1"));
        sumedit1->setGeometry(QRect(88, 305, 129, 27));
        player1Button = new QPushButton(centralWidget);
        player1Button->setObjectName(QString::fromUtf8("player1Button"));
        player1Button->setGeometry(QRect(135, 339, 85, 27));
        Schachuhr->setCentralWidget(centralWidget);

        retranslateUi(Schachuhr);

        QMetaObject::connectSlotsByName(Schachuhr);
    } // setupUi

    void retranslateUi(QMainWindow *Schachuhr)
    {
        Schachuhr->setWindowTitle(QApplication::translate("Schachuhr", "Schachuhr", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("Schachuhr", "Clear", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("Schachuhr", "Quit", 0, QApplication::UnicodeUTF8));
        labelplayer2->setText(QApplication::translate("Schachuhr", "Spieler 2", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("Schachuhr", "Stop", 0, QApplication::UnicodeUTF8));
        player2Button->setText(QApplication::translate("Schachuhr", "Start/Stop", 0, QApplication::UnicodeUTF8));
        labelplayer1->setText(QApplication::translate("Schachuhr", "Spieler 1", 0, QApplication::UnicodeUTF8));
        player1Button->setText(QApplication::translate("Schachuhr", "Start/Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Schachuhr: public Ui_Schachuhr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHACHUHR_H
