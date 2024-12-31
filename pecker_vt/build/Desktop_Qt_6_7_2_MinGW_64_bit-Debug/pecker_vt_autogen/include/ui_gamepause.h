/********************************************************************************
** Form generated from reading UI file 'gamepause.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPAUSE_H
#define UI_GAMEPAUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamePause
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Exit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *GamePause)
    {
        if (GamePause->objectName().isEmpty())
            GamePause->setObjectName("GamePause");
        GamePause->resize(700, 484);
        horizontalLayout = new QHBoxLayout(GamePause);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_Start = new QPushButton(GamePause);
        pushButton_Start->setObjectName("pushButton_Start");

        verticalLayout->addWidget(pushButton_Start);

        pushButton_Save = new QPushButton(GamePause);
        pushButton_Save->setObjectName("pushButton_Save");

        verticalLayout->addWidget(pushButton_Save);

        pushButton_Exit = new QPushButton(GamePause);
        pushButton_Exit->setObjectName("pushButton_Exit");

        verticalLayout->addWidget(pushButton_Exit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(GamePause);

        QMetaObject::connectSlotsByName(GamePause);
    } // setupUi

    void retranslateUi(QWidget *GamePause)
    {
        GamePause->setWindowTitle(QCoreApplication::translate("GamePause", "Form", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("GamePause", "Play", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("GamePause", "Save", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("GamePause", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamePause: public Ui_GamePause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPAUSE_H
