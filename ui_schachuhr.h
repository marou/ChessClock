/********************************************************************************
** Form generated from reading UI file 'schachuhr.ui'
**
** Created: Fri Jul 1 09:02:23 2011
**      by: Qt User Interface Compiler version 4.7.3
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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schachuhr
{
public:
    QWidget *centralWidget;
    QPushButton *clearButton;
    QPushButton *quitButton;
    QPushButton *stopButton;
    QPushButton *player2Button;
    QPushButton *player1Button;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelplayer1;
    QPlainTextEdit *ausgabe1;
    QLineEdit *sumedit1;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelplayer2;
    QPlainTextEdit *ausgabe2;
    QLineEdit *sumedit2;

    void setupUi(QMainWindow *Schachuhr)
    {
        if (Schachuhr->objectName().isEmpty())
            Schachuhr->setObjectName(QString::fromUtf8("Schachuhr"));
        Schachuhr->resize(677, 520);
        centralWidget = new QWidget(Schachuhr);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(300, 410, 85, 27));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(300, 450, 85, 27));
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(300, 380, 85, 27));
        player2Button = new QPushButton(centralWidget);
        player2Button->setObjectName(QString::fromUtf8("player2Button"));
        player2Button->setGeometry(QRect(430, 340, 85, 27));
        player1Button = new QPushButton(centralWidget);
        player1Button->setObjectName(QString::fromUtf8("player1Button"));
        player1Button->setGeometry(QRect(180, 340, 85, 27));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(87, 68, 258, 265));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelplayer1 = new QLabel(widget);
        labelplayer1->setObjectName(QString::fromUtf8("labelplayer1"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelplayer1->setFont(font);
        labelplayer1->setLayoutDirection(Qt::LeftToRight);
        labelplayer1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelplayer1);

        ausgabe1 = new QPlainTextEdit(widget);
        ausgabe1->setObjectName(QString::fromUtf8("ausgabe1"));

        verticalLayout->addWidget(ausgabe1);

        sumedit1 = new QLineEdit(widget);
        sumedit1->setObjectName(QString::fromUtf8("sumedit1"));

        verticalLayout->addWidget(sumedit1);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(353, 68, 258, 265));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelplayer2 = new QLabel(widget1);
        labelplayer2->setObjectName(QString::fromUtf8("labelplayer2"));
        labelplayer2->setFont(font);
        labelplayer2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelplayer2);

        ausgabe2 = new QPlainTextEdit(widget1);
        ausgabe2->setObjectName(QString::fromUtf8("ausgabe2"));

        verticalLayout_2->addWidget(ausgabe2);

        sumedit2 = new QLineEdit(widget1);
        sumedit2->setObjectName(QString::fromUtf8("sumedit2"));

        verticalLayout_2->addWidget(sumedit2);

        Schachuhr->setCentralWidget(centralWidget);

        retranslateUi(Schachuhr);

        QMetaObject::connectSlotsByName(Schachuhr);
    } // setupUi

    void retranslateUi(QMainWindow *Schachuhr)
    {
        Schachuhr->setWindowTitle(QApplication::translate("Schachuhr", "Schachuhr", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("Schachuhr", "Clear", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("Schachuhr", "Quit", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("Schachuhr", "Stop", 0, QApplication::UnicodeUTF8));
        player2Button->setText(QApplication::translate("Schachuhr", "Start/Stop", 0, QApplication::UnicodeUTF8));
        player1Button->setText(QApplication::translate("Schachuhr", "Start/Stop", 0, QApplication::UnicodeUTF8));
        labelplayer1->setText(QApplication::translate("Schachuhr", "Spieler 1", 0, QApplication::UnicodeUTF8));
        labelplayer2->setText(QApplication::translate("Schachuhr", "Spieler 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Schachuhr: public Ui_Schachuhr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHACHUHR_H
