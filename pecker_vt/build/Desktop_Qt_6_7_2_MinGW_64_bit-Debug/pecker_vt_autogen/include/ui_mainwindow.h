/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_start;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_NewGmae;
    QPushButton *pushButton_LoadGame;
    QPushButton *pushButton_Settings;
    QPushButton *pushButton_Close;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_settings;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_Sound;
    QPushButton *pushButton_Graphic;
    QPushButton *pushButton_Binds;
    QPushButton *pushButton_Back;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *page_game;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(801, 604);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        page_start = new QWidget();
        page_start->setObjectName("page_start");
        horizontalLayout = new QHBoxLayout(page_start);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_NewGmae = new QPushButton(page_start);
        pushButton_NewGmae->setObjectName("pushButton_NewGmae");

        verticalLayout_2->addWidget(pushButton_NewGmae);

        pushButton_LoadGame = new QPushButton(page_start);
        pushButton_LoadGame->setObjectName("pushButton_LoadGame");

        verticalLayout_2->addWidget(pushButton_LoadGame);

        pushButton_Settings = new QPushButton(page_start);
        pushButton_Settings->setObjectName("pushButton_Settings");

        verticalLayout_2->addWidget(pushButton_Settings);

        pushButton_Close = new QPushButton(page_start);
        pushButton_Close->setObjectName("pushButton_Close");

        verticalLayout_2->addWidget(pushButton_Close);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        stackedWidget->addWidget(page_start);
        page_settings = new QWidget();
        page_settings->setObjectName("page_settings");
        horizontalLayout_2 = new QHBoxLayout(page_settings);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        pushButton_Sound = new QPushButton(page_settings);
        pushButton_Sound->setObjectName("pushButton_Sound");
        pushButton_Sound->setAcceptDrops(false);
        pushButton_Sound->setToolTipDuration(-1);

        verticalLayout_3->addWidget(pushButton_Sound);

        pushButton_Graphic = new QPushButton(page_settings);
        pushButton_Graphic->setObjectName("pushButton_Graphic");
        pushButton_Graphic->setAcceptDrops(false);
        pushButton_Graphic->setToolTipDuration(-1);

        verticalLayout_3->addWidget(pushButton_Graphic);

        pushButton_Binds = new QPushButton(page_settings);
        pushButton_Binds->setObjectName("pushButton_Binds");
        pushButton_Binds->setAcceptDrops(false);
        pushButton_Binds->setToolTipDuration(1);

        verticalLayout_3->addWidget(pushButton_Binds);

        pushButton_Back = new QPushButton(page_settings);
        pushButton_Back->setObjectName("pushButton_Back");
        pushButton_Back->setAcceptDrops(false);
        pushButton_Back->setToolTipDuration(-1);

        verticalLayout_3->addWidget(pushButton_Back);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        stackedWidget->addWidget(page_settings);
        page_game = new QWidget();
        page_game->setObjectName("page_game");
        stackedWidget->addWidget(page_game);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setEnabled(true);
        statusbar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_NewGmae->setText(QCoreApplication::translate("MainWindow", "New Game", nullptr));
        pushButton_LoadGame->setText(QCoreApplication::translate("MainWindow", "Load Game", nullptr));
        pushButton_Settings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        pushButton_Sound->setText(QCoreApplication::translate("MainWindow", "Sound", nullptr));
        pushButton_Graphic->setText(QCoreApplication::translate("MainWindow", "Graphic", nullptr));
        pushButton_Binds->setText(QCoreApplication::translate("MainWindow", "Binds", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
