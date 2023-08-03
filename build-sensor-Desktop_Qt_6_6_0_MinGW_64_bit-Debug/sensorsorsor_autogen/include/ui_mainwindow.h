/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newaction;
    QAction *openaction;
    QAction *saveaction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu;
    QMenu *menu_B;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        newaction = new QAction(MainWindow);
        newaction->setObjectName("newaction");
        openaction = new QAction(MainWindow);
        openaction->setObjectName("openaction");
        saveaction = new QAction(MainWindow);
        saveaction->setObjectName("saveaction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_B = new QMenu(menubar);
        menu_B->setObjectName("menu_B");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_B->menuAction());
        menu_F->addAction(newaction);
        menu_F->addAction(openaction);
        menu_F->addAction(saveaction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newaction->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        openaction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        saveaction->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&S)", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\257\221(&E)", nullptr));
        menu_B->setTitle(QCoreApplication::translate("MainWindow", "\346\236\204\345\273\272\357\274\210&B\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
