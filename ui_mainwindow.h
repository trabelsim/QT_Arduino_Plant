/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionShow_charts;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *temp_png;
    QLabel *hum_png;
    QLabel *lux_png;
    QTextEdit *main_text;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *temp_line;
    QLineEdit *hum_line;
    QLineEdit *lux_line;
    QPushButton *connectButton;
    QTextEdit *device_edit;
    QPushButton *getdata;
    QPushButton *exit_button;
    QWidget *tab_2;
    QCustomPlot *plot;
    QLabel *temp_png_2;
    QCustomPlot *plot_2;
    QCustomPlot *plot_3;
    QLabel *hum_png_2;
    QLabel *lux_png_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1021, 661);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionShow_charts = new QAction(MainWindow);
        actionShow_charts->setObjectName(QString::fromUtf8("actionShow_charts"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 981, 631));
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 60, 901, 501));
        temp_png = new QLabel(groupBox);
        temp_png->setObjectName(QString::fromUtf8("temp_png"));
        temp_png->setEnabled(true);
        temp_png->setGeometry(QRect(510, 180, 50, 50));
        temp_png->setPixmap(QPixmap(QString::fromUtf8("../Desktop/WDS/temperatura.png")));
        temp_png->setScaledContents(true);
        hum_png = new QLabel(groupBox);
        hum_png->setObjectName(QString::fromUtf8("hum_png"));
        hum_png->setGeometry(QRect(510, 280, 50, 51));
        hum_png->setPixmap(QPixmap(QString::fromUtf8("../Desktop/WDS/wilgotnosc.png")));
        hum_png->setScaledContents(true);
        lux_png = new QLabel(groupBox);
        lux_png->setObjectName(QString::fromUtf8("lux_png"));
        lux_png->setGeometry(QRect(510, 380, 50, 50));
        lux_png->setPixmap(QPixmap(QString::fromUtf8("../Desktop/WDS/naswietlenie.png")));
        lux_png->setScaledContents(true);
        main_text = new QTextEdit(groupBox);
        main_text->setObjectName(QString::fromUtf8("main_text"));
        main_text->setGeometry(QRect(450, 30, 341, 101));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 160, 331, 251));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 40, 241, 41));
        temp_line = new QLineEdit(groupBox);
        temp_line->setObjectName(QString::fromUtf8("temp_line"));
        temp_line->setGeometry(QRect(630, 180, 161, 41));
        hum_line = new QLineEdit(groupBox);
        hum_line->setObjectName(QString::fromUtf8("hum_line"));
        hum_line->setGeometry(QRect(630, 280, 161, 41));
        lux_line = new QLineEdit(groupBox);
        lux_line->setObjectName(QString::fromUtf8("lux_line"));
        lux_line->setGeometry(QRect(630, 380, 161, 41));
        connectButton = new QPushButton(tab);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(40, 20, 89, 25));
        device_edit = new QTextEdit(tab);
        device_edit->setObjectName(QString::fromUtf8("device_edit"));
        device_edit->setGeometry(QRect(170, 20, 161, 31));
        getdata = new QPushButton(tab);
        getdata->setObjectName(QString::fromUtf8("getdata"));
        getdata->setGeometry(QRect(680, 20, 89, 25));
        exit_button = new QPushButton(tab);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(790, 20, 80, 25));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        plot = new QCustomPlot(tab_2);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(160, 30, 771, 161));
        temp_png_2 = new QLabel(tab_2);
        temp_png_2->setObjectName(QString::fromUtf8("temp_png_2"));
        temp_png_2->setEnabled(true);
        temp_png_2->setGeometry(QRect(50, 70, 50, 50));
        temp_png_2->setPixmap(QPixmap(QString::fromUtf8("../Desktop/WDS/temperatura.png")));
        temp_png_2->setScaledContents(true);
        plot_2 = new QCustomPlot(tab_2);
        plot_2->setObjectName(QString::fromUtf8("plot_2"));
        plot_2->setGeometry(QRect(160, 220, 771, 161));
        plot_3 = new QCustomPlot(tab_2);
        plot_3->setObjectName(QString::fromUtf8("plot_3"));
        plot_3->setGeometry(QRect(160, 420, 771, 161));
        hum_png_2 = new QLabel(tab_2);
        hum_png_2->setObjectName(QString::fromUtf8("hum_png_2"));
        hum_png_2->setGeometry(QRect(50, 270, 50, 50));
        hum_png_2->setPixmap(QPixmap(QString::fromUtf8("../Desktop/WDS/wilgotnosc.png")));
        hum_png_2->setScaledContents(true);
        lux_png_2 = new QLabel(tab_2);
        lux_png_2->setObjectName(QString::fromUtf8("lux_png_2"));
        lux_png_2->setGeometry(QRect(50, 460, 50, 50));
        lux_png_2->setPixmap(QPixmap(QString::fromUtf8("../Desktop/WDS/naswietlenie.png")));
        lux_png_2->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionShow_charts->setText(QCoreApplication::translate("MainWindow", "Show charts", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Status", nullptr));
        temp_png->setText(QString());
        hum_png->setText(QString());
        lux_png->setText(QString());
        label_2->setText(QString());
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        getdata->setText(QCoreApplication::translate("MainWindow", "Get Data", nullptr));
        exit_button->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Overwiew", nullptr));
        temp_png_2->setText(QString());
        hum_png_2->setText(QString());
        lux_png_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Charts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
