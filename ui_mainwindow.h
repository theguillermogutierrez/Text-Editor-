/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuText;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/nick-fewings-1SsUquHPNT8-unsplash.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/lucas-myers-efoo8mqF22M-unsplash.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon1);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/engin-akyurt-CGnoRQZGWmw-unsplash.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/joshua-hoehne-WPrTKRw8KRQ-unsplash.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionCopy->setIcon(icon2);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionPaste->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/aleksandar-zivkovic-c18q3myyHLU-unsplash.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        actionUndo->setIcon(icon);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        actionRedo->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(19, 9, 761, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuText = new QMenu(menubar);
        menuText->setObjectName("menuText");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuText->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuText->addAction(actionNew);
        menuText->addAction(actionOpen);
        menuText->addAction(actionSave_As);
        menuText->addAction(actionPrint);
        menuText->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        menuText->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
