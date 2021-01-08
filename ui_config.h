/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Config
{
public:
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *distanceIpBox;
    QLabel *distanceIP;
    QLineEdit *distanceIpEdit;
    QGroupBox *distancePortBox;
    QLabel *distancePort;
    QLineEdit *distancePortEdit;
    QGroupBox *localIpBox;
    QLabel *localIP;
    QLineEdit *localIpEdit;
    QGroupBox *localPortBox;
    QLabel *localPort;
    QLineEdit *localPortEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Config)
    {
        if (Config->objectName().isEmpty())
            Config->setObjectName(QString::fromUtf8("Config"));
        Config->resize(309, 500);
        groupBox_5 = new QGroupBox(Config);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 10, 311, 491));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        distanceIpBox = new QGroupBox(groupBox_5);
        distanceIpBox->setObjectName(QString::fromUtf8("distanceIpBox"));
        distanceIP = new QLabel(distanceIpBox);
        distanceIP->setObjectName(QString::fromUtf8("distanceIP"));
        distanceIP->setGeometry(QRect(10, 40, 72, 15));
        distanceIpEdit = new QLineEdit(distanceIpBox);
        distanceIpEdit->setObjectName(QString::fromUtf8("distanceIpEdit"));
        distanceIpEdit->setGeometry(QRect(100, 40, 113, 23));

        verticalLayout->addWidget(distanceIpBox);

        distancePortBox = new QGroupBox(groupBox_5);
        distancePortBox->setObjectName(QString::fromUtf8("distancePortBox"));
        distancePort = new QLabel(distancePortBox);
        distancePort->setObjectName(QString::fromUtf8("distancePort"));
        distancePort->setGeometry(QRect(10, 40, 72, 15));
        distancePortEdit = new QLineEdit(distancePortBox);
        distancePortEdit->setObjectName(QString::fromUtf8("distancePortEdit"));
        distancePortEdit->setGeometry(QRect(100, 40, 113, 23));

        verticalLayout->addWidget(distancePortBox);

        localIpBox = new QGroupBox(groupBox_5);
        localIpBox->setObjectName(QString::fromUtf8("localIpBox"));
        localIP = new QLabel(localIpBox);
        localIP->setObjectName(QString::fromUtf8("localIP"));
        localIP->setGeometry(QRect(10, 40, 72, 15));
        localIpEdit = new QLineEdit(localIpBox);
        localIpEdit->setObjectName(QString::fromUtf8("localIpEdit"));
        localIpEdit->setGeometry(QRect(100, 40, 113, 23));

        verticalLayout->addWidget(localIpBox);

        localPortBox = new QGroupBox(groupBox_5);
        localPortBox->setObjectName(QString::fromUtf8("localPortBox"));
        localPort = new QLabel(localPortBox);
        localPort->setObjectName(QString::fromUtf8("localPort"));
        localPort->setGeometry(QRect(10, 40, 72, 15));
        localPortEdit = new QLineEdit(localPortBox);
        localPortEdit->setObjectName(QString::fromUtf8("localPortEdit"));
        localPortEdit->setGeometry(QRect(100, 40, 113, 23));

        verticalLayout->addWidget(localPortBox);

        buttonBox = new QDialogButtonBox(groupBox_5);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Config);

        QMetaObject::connectSlotsByName(Config);
    } // setupUi

    void retranslateUi(QDialog *Config)
    {
        Config->setWindowTitle(QApplication::translate("Config", "Dialog", nullptr));
        groupBox_5->setTitle(QApplication::translate("Config", "GroupBox", nullptr));
        distanceIpBox->setTitle(QApplication::translate("Config", "GroupBox", nullptr));
        distanceIP->setText(QApplication::translate("Config", "\350\277\234\346\226\271IP", nullptr));
        distancePortBox->setTitle(QApplication::translate("Config", "GroupBox", nullptr));
        distancePort->setText(QApplication::translate("Config", "\350\277\234\346\226\271\347\253\257\345\217\243", nullptr));
        localIpBox->setTitle(QApplication::translate("Config", "GroupBox", nullptr));
        localIP->setText(QApplication::translate("Config", "\346\234\254\345\234\260IP", nullptr));
        localPortBox->setTitle(QApplication::translate("Config", "GroupBox", nullptr));
        localPort->setText(QApplication::translate("Config", "\346\234\254\345\234\260\347\253\257\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Config: public Ui_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
