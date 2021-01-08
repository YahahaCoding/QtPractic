/********************************************************************************
** Form generated from reading UI file 'LoginInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININTERFACE_H
#define UI_LOGININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInterface
{
public:
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *accountNumber;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *password;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginPushButton;
    QPushButton *resetPasswordPushButton;
    QPushButton *logOnPushButton;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QString::fromUtf8("LoginInterface"));
        LoginInterface->resize(341, 245);
        groupBox_4 = new QGroupBox(LoginInterface);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 341, 246));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        accountNumber = new QLineEdit(groupBox);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));

        horizontalLayout->addWidget(accountNumber);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        password = new QLineEdit(groupBox_2);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_2->addWidget(password);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        loginPushButton = new QPushButton(groupBox_3);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));

        horizontalLayout_3->addWidget(loginPushButton);

        resetPasswordPushButton = new QPushButton(groupBox_3);
        resetPasswordPushButton->setObjectName(QString::fromUtf8("resetPasswordPushButton"));

        horizontalLayout_3->addWidget(resetPasswordPushButton);

        logOnPushButton = new QPushButton(groupBox_3);
        logOnPushButton->setObjectName(QString::fromUtf8("logOnPushButton"));

        horizontalLayout_3->addWidget(logOnPushButton);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QApplication::translate("LoginInterface", "LoginInterface", nullptr));
        groupBox_4->setTitle(QApplication::translate("LoginInterface", "GroupBox", nullptr));
        groupBox->setTitle(QApplication::translate("LoginInterface", "GroupBox", nullptr));
        label->setText(QApplication::translate("LoginInterface", "\350\264\246\345\217\267", nullptr));
        groupBox_2->setTitle(QApplication::translate("LoginInterface", "GroupBox", nullptr));
        label_2->setText(QApplication::translate("LoginInterface", "\345\257\206\347\240\201", nullptr));
        groupBox_3->setTitle(QApplication::translate("LoginInterface", "GroupBox", nullptr));
        loginPushButton->setText(QApplication::translate("LoginInterface", "\347\231\273\345\275\225", nullptr));
        resetPasswordPushButton->setText(QApplication::translate("LoginInterface", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", nullptr));
        logOnPushButton->setText(QApplication::translate("LoginInterface", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
