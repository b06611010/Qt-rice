/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_picture;
    QPushButton *pb_count;
    QPushButton *pb_binary;
    QPushButton *pb_erosion;
    QPushButton *pb_origin;
    QLabel *label_Question;
    QLabel *label_num;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(719, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_picture = new QLabel(centralWidget);
        label_picture->setObjectName(QString::fromUtf8("label_picture"));
        label_picture->setGeometry(QRect(10, 10, 491, 481));
        pb_count = new QPushButton(centralWidget);
        pb_count->setObjectName(QString::fromUtf8("pb_count"));
        pb_count->setGeometry(QRect(570, 450, 81, 51));
        pb_binary = new QPushButton(centralWidget);
        pb_binary->setObjectName(QString::fromUtf8("pb_binary"));
        pb_binary->setGeometry(QRect(570, 310, 81, 51));
        pb_erosion = new QPushButton(centralWidget);
        pb_erosion->setObjectName(QString::fromUtf8("pb_erosion"));
        pb_erosion->setGeometry(QRect(570, 380, 81, 51));
        pb_origin = new QPushButton(centralWidget);
        pb_origin->setObjectName(QString::fromUtf8("pb_origin"));
        pb_origin->setGeometry(QRect(570, 240, 81, 51));
        label_Question = new QLabel(centralWidget);
        label_Question->setObjectName(QString::fromUtf8("label_Question"));
        label_Question->setGeometry(QRect(30, 530, 281, 31));
        label_num = new QLabel(centralWidget);
        label_num->setObjectName(QString::fromUtf8("label_num"));
        label_num->setGeometry(QRect(350, 530, 63, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 719, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_picture->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pb_count->setText(QApplication::translate("MainWindow", "Count", nullptr));
        pb_binary->setText(QApplication::translate("MainWindow", "binary", nullptr));
        pb_erosion->setText(QApplication::translate("MainWindow", "erosion", nullptr));
        pb_origin->setText(QApplication::translate("MainWindow", "origin", nullptr));
        label_Question->setText(QApplication::translate("MainWindow", "How many rice grains on the photo?", nullptr));
        label_num->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
