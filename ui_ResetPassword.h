/********************************************************************************
** Form generated from reading UI file 'ResetPassword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPASSWORD_H
#define UI_RESETPASSWORD_H

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

class Ui_ResetPassword
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
    QLineEdit *newPassword;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *newPasswordAgain;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *resetPasswordConfirm;
    QPushButton *cancelResetPassword;

    void setupUi(QWidget *ResetPassword)
    {
        if (ResetPassword->objectName().isEmpty())
            ResetPassword->setObjectName(QString::fromUtf8("ResetPassword"));
        ResetPassword->resize(331, 313);
        groupBox_4 = new QGroupBox(ResetPassword);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 331, 316));
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

        newPassword = new QLineEdit(groupBox_2);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));

        horizontalLayout_2->addWidget(newPassword);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        newPasswordAgain = new QLineEdit(groupBox_3);
        newPasswordAgain->setObjectName(QString::fromUtf8("newPasswordAgain"));

        horizontalLayout_3->addWidget(newPasswordAgain);


        verticalLayout->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        resetPasswordConfirm = new QPushButton(groupBox_5);
        resetPasswordConfirm->setObjectName(QString::fromUtf8("resetPasswordConfirm"));

        horizontalLayout_4->addWidget(resetPasswordConfirm);

        cancelResetPassword = new QPushButton(groupBox_5);
        cancelResetPassword->setObjectName(QString::fromUtf8("cancelResetPassword"));

        horizontalLayout_4->addWidget(cancelResetPassword);


        verticalLayout->addWidget(groupBox_5);


        retranslateUi(ResetPassword);

        QMetaObject::connectSlotsByName(ResetPassword);
    } // setupUi

    void retranslateUi(QWidget *ResetPassword)
    {
        ResetPassword->setWindowTitle(QApplication::translate("ResetPassword", "ResetPassword", nullptr));
        groupBox_4->setTitle(QApplication::translate("ResetPassword", "GroupBox", nullptr));
        groupBox->setTitle(QApplication::translate("ResetPassword", "GroupBox", nullptr));
        label->setText(QApplication::translate("ResetPassword", "\350\264\246\345\217\267", nullptr));
        groupBox_2->setTitle(QApplication::translate("ResetPassword", "GroupBox", nullptr));
        label_2->setText(QApplication::translate("ResetPassword", "\346\226\260\345\257\206\347\240\201", nullptr));
        groupBox_3->setTitle(QApplication::translate("ResetPassword", "GroupBox", nullptr));
        label_3->setText(QApplication::translate("ResetPassword", "\345\206\215\350\276\223\344\270\200\346\254\241\346\226\260\345\257\206\347\240\201", nullptr));
        groupBox_5->setTitle(QApplication::translate("ResetPassword", "GroupBox", nullptr));
        resetPasswordConfirm->setText(QApplication::translate("ResetPassword", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        cancelResetPassword->setText(QApplication::translate("ResetPassword", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResetPassword: public Ui_ResetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPASSWORD_H
