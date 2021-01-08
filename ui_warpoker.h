/********************************************************************************
** Form generated from reading UI file 'warpoker.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARPOKER_H
#define UI_WARPOKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cardoperate.h"

QT_BEGIN_NAMESPACE

class Ui_WarPoker
{
public:
    QAction *actionconfig;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    CardOperate *enemyCard1;
    CardOperate *enemyCard2;
    CardOperate *enemyCard3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *left;
    QVBoxLayout *verticalLayout_2;
    CardOperate *myCard1;
    QPushButton *leftRoad;
    QGroupBox *center;
    QVBoxLayout *verticalLayout_4;
    CardOperate *myCard2;
    QPushButton *centerRoad;
    QGroupBox *right;
    QVBoxLayout *verticalLayout_5;
    CardOperate *myCard3;
    QPushButton *rightRoad;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_5;
    CardOperate *handCard1;
    CardOperate *handCard2;
    CardOperate *handCard3;
    CardOperate *handCard4;
    CardOperate *handCard5;
    CardOperate *handCard6;
    CardOperate *handCard7;
    CardOperate *handCard8;
    CardOperate *handCard9;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *cardConfirm;
    QPushButton *recovery;
    QPushButton *chatTool;
    QPushButton *readyButton;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WarPoker)
    {
        if (WarPoker->objectName().isEmpty())
            WarPoker->setObjectName(QString::fromUtf8("WarPoker"));
        WarPoker->resize(1126, 831);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WarPoker->sizePolicy().hasHeightForWidth());
        WarPoker->setSizePolicy(sizePolicy);
        actionconfig = new QAction(WarPoker);
        actionconfig->setObjectName(QString::fromUtf8("actionconfig"));
        centralwidget = new QWidget(WarPoker);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        enemyCard1 = new CardOperate(groupBox_2);
        enemyCard1->setObjectName(QString::fromUtf8("enemyCard1"));
        enemyCard1->setMaximumSize(QSize(332, 150));

        horizontalLayout_4->addWidget(enemyCard1);

        enemyCard2 = new CardOperate(groupBox_2);
        enemyCard2->setObjectName(QString::fromUtf8("enemyCard2"));
        enemyCard2->setMaximumSize(QSize(332, 150));

        horizontalLayout_4->addWidget(enemyCard2);

        enemyCard3 = new CardOperate(groupBox_2);
        enemyCard3->setObjectName(QString::fromUtf8("enemyCard3"));
        enemyCard3->setMaximumSize(QSize(332, 150));

        horizontalLayout_4->addWidget(enemyCard3);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        left = new QGroupBox(groupBox_3);
        left->setObjectName(QString::fromUtf8("left"));
        sizePolicy.setHeightForWidth(left->sizePolicy().hasHeightForWidth());
        left->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(left);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        myCard1 = new CardOperate(left);
        myCard1->setObjectName(QString::fromUtf8("myCard1"));
        myCard1->setMaximumSize(QSize(1000, 150));

        verticalLayout_2->addWidget(myCard1);

        leftRoad = new QPushButton(left);
        leftRoad->setObjectName(QString::fromUtf8("leftRoad"));
        sizePolicy.setHeightForWidth(leftRoad->sizePolicy().hasHeightForWidth());
        leftRoad->setSizePolicy(sizePolicy);
        leftRoad->setMaximumSize(QSize(332, 28));

        verticalLayout_2->addWidget(leftRoad);


        horizontalLayout_3->addWidget(left);

        center = new QGroupBox(groupBox_3);
        center->setObjectName(QString::fromUtf8("center"));
        sizePolicy.setHeightForWidth(center->sizePolicy().hasHeightForWidth());
        center->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(center);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        myCard2 = new CardOperate(center);
        myCard2->setObjectName(QString::fromUtf8("myCard2"));
        myCard2->setMaximumSize(QSize(1000, 150));

        verticalLayout_4->addWidget(myCard2);

        centerRoad = new QPushButton(center);
        centerRoad->setObjectName(QString::fromUtf8("centerRoad"));
        sizePolicy.setHeightForWidth(centerRoad->sizePolicy().hasHeightForWidth());
        centerRoad->setSizePolicy(sizePolicy);
        centerRoad->setMaximumSize(QSize(332, 28));

        verticalLayout_4->addWidget(centerRoad);


        horizontalLayout_3->addWidget(center);

        right = new QGroupBox(groupBox_3);
        right->setObjectName(QString::fromUtf8("right"));
        sizePolicy.setHeightForWidth(right->sizePolicy().hasHeightForWidth());
        right->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        myCard3 = new CardOperate(right);
        myCard3->setObjectName(QString::fromUtf8("myCard3"));
        sizePolicy.setHeightForWidth(myCard3->sizePolicy().hasHeightForWidth());
        myCard3->setSizePolicy(sizePolicy);
        myCard3->setMaximumSize(QSize(1000, 150));

        verticalLayout_5->addWidget(myCard3);

        rightRoad = new QPushButton(right);
        rightRoad->setObjectName(QString::fromUtf8("rightRoad"));
        sizePolicy.setHeightForWidth(rightRoad->sizePolicy().hasHeightForWidth());
        rightRoad->setSizePolicy(sizePolicy);
        rightRoad->setMaximumSize(QSize(332, 28));

        verticalLayout_5->addWidget(rightRoad);


        horizontalLayout_3->addWidget(right);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(groupBox_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        handCard1 = new CardOperate(groupBox_6);
        handCard1->setObjectName(QString::fromUtf8("handCard1"));
        sizePolicy.setHeightForWidth(handCard1->sizePolicy().hasHeightForWidth());
        handCard1->setSizePolicy(sizePolicy);
        handCard1->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard1);

        handCard2 = new CardOperate(groupBox_6);
        handCard2->setObjectName(QString::fromUtf8("handCard2"));
        sizePolicy.setHeightForWidth(handCard2->sizePolicy().hasHeightForWidth());
        handCard2->setSizePolicy(sizePolicy);
        handCard2->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard2);

        handCard3 = new CardOperate(groupBox_6);
        handCard3->setObjectName(QString::fromUtf8("handCard3"));
        sizePolicy.setHeightForWidth(handCard3->sizePolicy().hasHeightForWidth());
        handCard3->setSizePolicy(sizePolicy);
        handCard3->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard3);

        handCard4 = new CardOperate(groupBox_6);
        handCard4->setObjectName(QString::fromUtf8("handCard4"));
        sizePolicy.setHeightForWidth(handCard4->sizePolicy().hasHeightForWidth());
        handCard4->setSizePolicy(sizePolicy);
        handCard4->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard4);

        handCard5 = new CardOperate(groupBox_6);
        handCard5->setObjectName(QString::fromUtf8("handCard5"));
        sizePolicy.setHeightForWidth(handCard5->sizePolicy().hasHeightForWidth());
        handCard5->setSizePolicy(sizePolicy);
        handCard5->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard5);

        handCard6 = new CardOperate(groupBox_6);
        handCard6->setObjectName(QString::fromUtf8("handCard6"));
        sizePolicy.setHeightForWidth(handCard6->sizePolicy().hasHeightForWidth());
        handCard6->setSizePolicy(sizePolicy);
        handCard6->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard6);

        handCard7 = new CardOperate(groupBox_6);
        handCard7->setObjectName(QString::fromUtf8("handCard7"));
        sizePolicy.setHeightForWidth(handCard7->sizePolicy().hasHeightForWidth());
        handCard7->setSizePolicy(sizePolicy);
        handCard7->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard7);

        handCard8 = new CardOperate(groupBox_6);
        handCard8->setObjectName(QString::fromUtf8("handCard8"));
        sizePolicy.setHeightForWidth(handCard8->sizePolicy().hasHeightForWidth());
        handCard8->setSizePolicy(sizePolicy);
        handCard8->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard8);

        handCard9 = new CardOperate(groupBox_6);
        handCard9->setObjectName(QString::fromUtf8("handCard9"));
        sizePolicy.setHeightForWidth(handCard9->sizePolicy().hasHeightForWidth());
        handCard9->setSizePolicy(sizePolicy);
        handCard9->setMaximumSize(QSize(105, 150));

        horizontalLayout_5->addWidget(handCard9);


        verticalLayout_3->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        groupBox_7->setMaximumSize(QSize(1000, 100));
        horizontalLayout_2 = new QHBoxLayout(groupBox_7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_4 = new QGroupBox(groupBox_7);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setMaximumSize(QSize(300, 100));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cardConfirm = new QPushButton(groupBox_4);
        cardConfirm->setObjectName(QString::fromUtf8("cardConfirm"));
        sizePolicy.setHeightForWidth(cardConfirm->sizePolicy().hasHeightForWidth());
        cardConfirm->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cardConfirm);

        recovery = new QPushButton(groupBox_4);
        recovery->setObjectName(QString::fromUtf8("recovery"));
        sizePolicy.setHeightForWidth(recovery->sizePolicy().hasHeightForWidth());
        recovery->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(recovery);

        chatTool = new QPushButton(groupBox_4);
        chatTool->setObjectName(QString::fromUtf8("chatTool"));
        sizePolicy.setHeightForWidth(chatTool->sizePolicy().hasHeightForWidth());
        chatTool->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(chatTool);


        horizontalLayout_2->addWidget(groupBox_4);

        readyButton = new QPushButton(groupBox_7);
        readyButton->setObjectName(QString::fromUtf8("readyButton"));
        sizePolicy.setHeightForWidth(readyButton->sizePolicy().hasHeightForWidth());
        readyButton->setSizePolicy(sizePolicy);
        readyButton->setMaximumSize(QSize(200, 35));

        horizontalLayout_2->addWidget(readyButton);


        verticalLayout_3->addWidget(groupBox_7);


        gridLayout->addWidget(groupBox_5, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        WarPoker->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WarPoker);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1126, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        WarPoker->setMenuBar(menubar);
        statusbar = new QStatusBar(WarPoker);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WarPoker->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionconfig);

        retranslateUi(WarPoker);

        QMetaObject::connectSlotsByName(WarPoker);
    } // setupUi

    void retranslateUi(QMainWindow *WarPoker)
    {
        WarPoker->setWindowTitle(QApplication::translate("WarPoker", "WarPoker", nullptr));
        actionconfig->setText(QApplication::translate("WarPoker", "config", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("WarPoker", "\345\257\271\346\226\271\347\211\214\345\214\272", nullptr));
        enemyCard1->setText(QString());
        enemyCard2->setText(QString());
        enemyCard3->setText(QString());
        groupBox_3->setTitle(QApplication::translate("WarPoker", "\346\210\221\346\226\271\347\211\214\345\214\272", nullptr));
        left->setTitle(QApplication::translate("WarPoker", "\345\267\246\350\267\257", nullptr));
        myCard1->setText(QString());
        leftRoad->setText(QApplication::translate("WarPoker", "\345\270\203\345\205\265", nullptr));
        center->setTitle(QApplication::translate("WarPoker", "\344\270\255\350\267\257", nullptr));
        myCard2->setText(QString());
        centerRoad->setText(QApplication::translate("WarPoker", "\345\270\203\345\205\265", nullptr));
        right->setTitle(QApplication::translate("WarPoker", "\345\217\263\350\267\257", nullptr));
        myCard3->setText(QString());
        rightRoad->setText(QApplication::translate("WarPoker", "\345\270\203\345\205\265", nullptr));
        groupBox_5->setTitle(QApplication::translate("WarPoker", "\346\223\215\344\275\234\345\214\272", nullptr));
        groupBox_6->setTitle(QApplication::translate("WarPoker", "\346\210\221\346\226\271\346\211\213\347\211\214", nullptr));
        handCard1->setText(QString());
        handCard2->setText(QString());
        handCard3->setText(QString());
        handCard4->setText(QString());
        handCard5->setText(QString());
        handCard6->setText(QString());
        handCard7->setText(QString());
        handCard8->setText(QString());
        handCard9->setText(QString());
        groupBox_7->setTitle(QApplication::translate("WarPoker", "GroupBox", nullptr));
        groupBox_4->setTitle(QString());
        cardConfirm->setText(QApplication::translate("WarPoker", "\345\270\203\347\275\256\345\256\214\346\257\225", nullptr));
        recovery->setText(QApplication::translate("WarPoker", "\346\224\266\345\205\265", nullptr));
        chatTool->setText(QApplication::translate("WarPoker", "\345\261\225\345\274\200\350\201\212\345\244\251\346\241\206", nullptr));
        readyButton->setText(QApplication::translate("WarPoker", "\345\207\206\345\244\207", nullptr));
        menu->setTitle(QApplication::translate("WarPoker", "\345\257\271\346\210\230\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WarPoker: public Ui_WarPoker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARPOKER_H
