/********************************************************************************
** Form generated from reading UI file 'FingerGuessing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINGERGUESSING_H
#define UI_FINGERGUESSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FingerGuessing
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *stoneButton;
    QPushButton *scissorsButton;
    QPushButton *clothButton;

    void setupUi(QDialog *FingerGuessing)
    {
        if (FingerGuessing->objectName().isEmpty())
            FingerGuessing->setObjectName(QString::fromUtf8("FingerGuessing"));
        FingerGuessing->resize(400, 300);
        groupBox = new QGroupBox(FingerGuessing);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 351, 251));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stoneButton = new QPushButton(groupBox);
        stoneButton->setObjectName(QString::fromUtf8("stoneButton"));
        stoneButton->setMaximumSize(QSize(200, 200));

        horizontalLayout->addWidget(stoneButton);

        scissorsButton = new QPushButton(groupBox);
        scissorsButton->setObjectName(QString::fromUtf8("scissorsButton"));
        scissorsButton->setMaximumSize(QSize(200, 200));

        horizontalLayout->addWidget(scissorsButton);

        clothButton = new QPushButton(groupBox);
        clothButton->setObjectName(QString::fromUtf8("clothButton"));
        clothButton->setMaximumSize(QSize(200, 200));

        horizontalLayout->addWidget(clothButton);


        retranslateUi(FingerGuessing);

        QMetaObject::connectSlotsByName(FingerGuessing);
    } // setupUi

    void retranslateUi(QDialog *FingerGuessing)
    {
        FingerGuessing->setWindowTitle(QApplication::translate("FingerGuessing", "FingerGuessing", nullptr));
        groupBox->setTitle(QApplication::translate("FingerGuessing", "GroupBox", nullptr));
        stoneButton->setText(QApplication::translate("FingerGuessing", "\347\237\263\345\244\264", nullptr));
        scissorsButton->setText(QApplication::translate("FingerGuessing", "\345\211\252\345\255\220", nullptr));
        clothButton->setText(QApplication::translate("FingerGuessing", "\345\270\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FingerGuessing: public Ui_FingerGuessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINGERGUESSING_H
