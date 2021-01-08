/********************************************************************************
** Form generated from reading UI file 'chattool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATTOOL_H
#define UI_CHATTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChatTool
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *sendButton;

    void setupUi(QDialog *ChatTool)
    {
        if (ChatTool->objectName().isEmpty())
            ChatTool->setObjectName(QString::fromUtf8("ChatTool"));
        ChatTool->resize(312, 599);
        groupBox = new QGroupBox(ChatTool);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 312, 601));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 1677215));
        horizontalLayout_5 = new QHBoxLayout(groupBox_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout_5->addWidget(textBrowser);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 100));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        sendButton = new QPushButton(groupBox_3);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(ChatTool);

        QMetaObject::connectSlotsByName(ChatTool);
    } // setupUi

    void retranslateUi(QDialog *ChatTool)
    {
        ChatTool->setWindowTitle(QApplication::translate("ChatTool", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("ChatTool", "GroupBox", nullptr));
        groupBox_2->setTitle(QApplication::translate("ChatTool", "GroupBox", nullptr));
        groupBox_3->setTitle(QApplication::translate("ChatTool", "GroupBox", nullptr));
        sendButton->setText(QApplication::translate("ChatTool", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatTool: public Ui_ChatTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATTOOL_H
