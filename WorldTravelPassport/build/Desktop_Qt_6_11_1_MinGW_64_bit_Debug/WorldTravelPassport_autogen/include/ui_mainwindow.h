/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnSeoul;
    QPushButton *btnSingapore;
    QPushButton *btnSydney;
    QPushButton *btnDubai;
    QListWidget *listFlight;
    QLabel *label_4;
    QLabel *labelVisited;
    QLabel *labelCount;
    QLabel *labelLevel;
    QPushButton *btnReserve;
    QLabel *labelStatus;
    QLabel *labelMap;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(693, 1017);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 20, 201, 20));
        btnSeoul = new QPushButton(centralwidget);
        btnSeoul->setObjectName("btnSeoul");
        btnSeoul->setGeometry(QRect(490, 140, 71, 29));
        btnSeoul->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color:red;\n"
"color:white;\n"
"font-size:16px;\n"
"font-weight:bold;"));
        btnSingapore = new QPushButton(centralwidget);
        btnSingapore->setObjectName("btnSingapore");
        btnSingapore->setGeometry(QRect(470, 220, 101, 29));
        btnSingapore->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color:green;\n"
"color:white;\n"
"font-size:16px;\n"
"font-weight:bold;"));
        btnSydney = new QPushButton(centralwidget);
        btnSydney->setObjectName("btnSydney");
        btnSydney->setGeometry(QRect(550, 300, 81, 29));
        btnSydney->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color:blue;\n"
"color:white;\n"
"font-size:16px;\n"
"font-weight:bold;"));
        btnDubai = new QPushButton(centralwidget);
        btnDubai->setObjectName("btnDubai");
        btnDubai->setGeometry(QRect(340, 160, 81, 29));
        btnDubai->setStyleSheet(QString::fromUtf8("border-radius:15px;\n"
"background-color:yellow;\n"
"color:black;\n"
"font-size:16px;\n"
"font-weight:bold;"));
        listFlight = new QListWidget(centralwidget);
        listFlight->setObjectName("listFlight");
        listFlight->setGeometry(QRect(110, 430, 301, 261));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 400, 111, 20));
        labelVisited = new QLabel(centralwidget);
        labelVisited->setObjectName("labelVisited");
        labelVisited->setGeometry(QRect(440, 520, 131, 20));
        labelCount = new QLabel(centralwidget);
        labelCount->setObjectName("labelCount");
        labelCount->setGeometry(QRect(440, 550, 131, 20));
        labelLevel = new QLabel(centralwidget);
        labelLevel->setObjectName("labelLevel");
        labelLevel->setGeometry(QRect(440, 580, 171, 20));
        btnReserve = new QPushButton(centralwidget);
        btnReserve->setObjectName("btnReserve");
        btnReserve->setGeometry(QRect(210, 710, 91, 29));
        labelStatus = new QLabel(centralwidget);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setGeometry(QRect(210, 750, 91, 20));
        labelMap = new QLabel(centralwidget);
        labelMap->setObjectName("labelMap");
        labelMap->setEnabled(true);
        labelMap->setGeometry(QRect(20, 60, 631, 321));
        labelMap->setMinimumSize(QSize(400, 300));
        labelMap->setPixmap(QPixmap(QString::fromUtf8(":/Images/worldmap.png")));
        labelMap->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        labelMap->raise();
        label->raise();
        listFlight->raise();
        label_4->raise();
        labelVisited->raise();
        labelCount->raise();
        labelLevel->raise();
        btnReserve->raise();
        labelStatus->raise();
        btnDubai->raise();
        btnSeoul->raise();
        btnSingapore->raise();
        btnSydney->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 693, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\342\234\210\357\270\217 World Travel Passport \342\234\210\357\270\217", nullptr));
        btnSeoul->setText(QCoreApplication::translate("MainWindow", "\342\227\217Seoul", nullptr));
        btnSingapore->setText(QCoreApplication::translate("MainWindow", "\342\227\217Singapore", nullptr));
        btnSydney->setText(QCoreApplication::translate("MainWindow", "\342\227\217Sydney", nullptr));
        btnDubai->setText(QCoreApplication::translate("MainWindow", "\342\227\217Dubai", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\360\237\233\253 \355\225\255\352\263\265\355\216\270 \353\252\251\353\241\235", nullptr));
        labelVisited->setText(QCoreApplication::translate("MainWindow", "\360\237\214\216 \353\260\251\353\254\270 \353\217\204\354\213\234 : 0\352\260\234", nullptr));
        labelCount->setText(QCoreApplication::translate("MainWindow", "\360\237\216\237\357\270\217 \353\210\204\354\240\201 \354\230\210\353\247\244 : 0\355\232\214", nullptr));
        labelLevel->setText(QCoreApplication::translate("MainWindow", "\360\237\217\205 \354\227\254\355\226\211 \353\223\261\352\270\211 : Beginner", nullptr));
        btnReserve->setText(QCoreApplication::translate("MainWindow", "\354\230\210\353\247\244\355\225\230\352\270\260", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "\354\203\201\355\203\234 : \353\214\200\352\270\260\354\244\221", nullptr));
        labelMap->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
