/********************************************************************************
** Form generated from reading UI file 'schachuhr.ui'
**
** Created: Thu Jun 30 15:11:47 2011
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schachuhr
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *labelplayer1;
    QPlainTextEdit *ausgabe1;
    QLineEdit *sumedit1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *player1Button;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelplayer2;
    QPlainTextEdit *ausgabe2;
    QLineEdit *sumedit2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *player2Button;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *clearButton;
    QPushButton *quitButton;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QMainWindow *Schachuhr)
    {
        if (Schachuhr->objectName().isEmpty())
            Schachuhr->setObjectName(QString::fromUtf8("Schachuhr"));
        Schachuhr->resize(530, 409);
        centralWidget = new QWidget(Schachuhr);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1, 1, 526, 402));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelplayer1 = new QLabel(widget);
        labelplayer1->setObjectName(QString::fromUtf8("labelplayer1"));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelplayer1->setFont(font);

        verticalLayout->addWidget(labelplayer1);

        ausgabe1 = new QPlainTextEdit(widget);
        ausgabe1->setObjectName(QString::fromUtf8("ausgabe1"));

        verticalLayout->addWidget(ausgabe1);

        sumedit1 = new QLineEdit(widget);
        sumedit1->setObjectName(QString::fromUtf8("sumedit1"));

        verticalLayout->addWidget(sumedit1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        player1Button = new QPushButton(widget);
        player1Button->setObjectName(QString::fromUtf8("player1Button"));

        horizontalLayout->addWidget(player1Button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelplayer2 = new QLabel(widget);
        labelplayer2->setObjectName(QString::fromUtf8("labelplayer2"));
        labelplayer2->setFont(font);

        verticalLayout_2->addWidget(labelplayer2);

        ausgabe2 = new QPlainTextEdit(widget);
        ausgabe2->setObjectName(QString::fromUtf8("ausgabe2"));

        verticalLayout_2->addWidget(ausgabe2);

        sumedit2 = new QLineEdit(widget);
        sumedit2->setObjectName(QString::fromUtf8("sumedit2"));

        verticalLayout_2->addWidget(sumedit2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        player2Button = new QPushButton(widget);
        player2Button->setObjectName(QString::fromUtf8("player2Button"));

        horizontalLayout_2->addWidget(player2Button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        stopButton = new QPushButton(widget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout_4->addWidget(stopButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_5->addWidget(clearButton);

        quitButton = new QPushButton(widget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout_5->addWidget(quitButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        Schachuhr->setCentralWidget(centralWidget);

        retranslateUi(Schachuhr);

        QMetaObject::connectSlotsByName(Schachuhr);
    } // setupUi

    void retranslateUi(QMainWindow *Schachuhr)
    {
        Schachuhr->setWindowTitle(QApplication::translate("Schachuhr", "Schachuhr", 0, QApplication::UnicodeUTF8));
        labelplayer1->setText(QApplication::translate("Schachuhr", "Spieler 1", 0, QApplication::UnicodeUTF8));
        player1Button->setText(QApplication::translate("Schachuhr", "Start/Stop", 0, QApplication::UnicodeUTF8));
        labelplayer2->setText(QApplication::translate("Schachuhr", "Spieler 2", 0, QApplication::UnicodeUTF8));
        player2Button->setText(QApplication::translate("Schachuhr", "Start/Stop", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("Schachuhr", "Stop", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("Schachuhr", "Clear", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("Schachuhr", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Schachuhr: public Ui_Schachuhr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHACHUHR_H
