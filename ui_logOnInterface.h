/********************************************************************************
** Form generated from reading UI file 'logOnInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGONINTERFACE_H
#define UI_LOGONINTERFACE_H

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

class Ui_logOnInterface
{
public:
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QLabel *headPortrait;
    QPushButton *browseButton;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *logOnAccountNumber;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *logOnPassword;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *logOnPasswordAgain;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *userName;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *logOnComfirm;
    QPushButton *logOnCancel;

    void setupUi(QWidget *logOnInterface)
    {
        if (logOnInterface->objectName().isEmpty())
            logOnInterface->setObjectName(QString::fromUtf8("logOnInterface"));
        logOnInterface->resize(329, 556);
        groupBox_4 = new QGroupBox(logOnInterface);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 250, 171, 231));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headPortrait = new QLabel(groupBox_4);
        headPortrait->setObjectName(QString::fromUtf8("headPortrait"));
        headPortrait->setMaximumSize(QSize(200, 16777215));
        headPortrait->setAlignment(Qt::AlignCenter);
        headPortrait->setIndent(0);

        verticalLayout->addWidget(headPortrait);

        browseButton = new QPushButton(groupBox_4);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        verticalLayout->addWidget(browseButton);

        groupBox_5 = new QGroupBox(logOnInterface);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 331, 242));
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(groupBox_5);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        logOnAccountNumber = new QLineEdit(groupBox);
        logOnAccountNumber->setObjectName(QString::fromUtf8("logOnAccountNumber"));

        horizontalLayout->addWidget(logOnAccountNumber);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        logOnPassword = new QLineEdit(groupBox_2);
        logOnPassword->setObjectName(QString::fromUtf8("logOnPassword"));

        horizontalLayout_2->addWidget(logOnPassword);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox_5);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        logOnPasswordAgain = new QLineEdit(groupBox_3);
        logOnPasswordAgain->setObjectName(QString::fromUtf8("logOnPasswordAgain"));

        horizontalLayout_3->addWidget(logOnPasswordAgain);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(logOnInterface);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(190, 250, 141, 85));
        verticalLayout_3 = new QVBoxLayout(groupBox_6);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        userName = new QLineEdit(groupBox_6);
        userName->setObjectName(QString::fromUtf8("userName"));

        verticalLayout_3->addWidget(userName);

        groupBox_7 = new QGroupBox(logOnInterface);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 490, 331, 67));
        horizontalLayout_4 = new QHBoxLayout(groupBox_7);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        logOnComfirm = new QPushButton(groupBox_7);
        logOnComfirm->setObjectName(QString::fromUtf8("logOnComfirm"));

        horizontalLayout_4->addWidget(logOnComfirm);

        logOnCancel = new QPushButton(groupBox_7);
        logOnCancel->setObjectName(QString::fromUtf8("logOnCancel"));

        horizontalLayout_4->addWidget(logOnCancel);


        retranslateUi(logOnInterface);

        QMetaObject::connectSlotsByName(logOnInterface);
    } // setupUi

    void retranslateUi(QWidget *logOnInterface)
    {
        logOnInterface->setWindowTitle(QApplication::translate("logOnInterface", "logOnInterface", nullptr));
        groupBox_4->setTitle(QApplication::translate("logOnInterface", "\351\200\211\346\213\251\345\244\264\345\203\217", nullptr));
        headPortrait->setText(QApplication::translate("logOnInterface", "TextLabel", nullptr));
        browseButton->setText(QApplication::translate("logOnInterface", "\346\265\217\350\247\210", nullptr));
        groupBox_5->setTitle(QApplication::translate("logOnInterface", "GroupBox", nullptr));
        groupBox->setTitle(QApplication::translate("logOnInterface", "GroupBox", nullptr));
        label->setText(QApplication::translate("logOnInterface", "\350\264\246\345\217\267", nullptr));
        groupBox_2->setTitle(QApplication::translate("logOnInterface", "GroupBox", nullptr));
        label_2->setText(QApplication::translate("logOnInterface", "\345\257\206\347\240\201", nullptr));
        groupBox_3->setTitle(QApplication::translate("logOnInterface", "GroupBox", nullptr));
        label_3->setText(QApplication::translate("logOnInterface", "\345\206\215\344\270\200\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        groupBox_6->setTitle(QApplication::translate("logOnInterface", "GroupBox", nullptr));
        label_5->setText(QApplication::translate("logOnInterface", "\346\230\265\347\247\260(1-8\344\270\252\345\255\227\347\254\246)", nullptr));
        groupBox_7->setTitle(QApplication::translate("logOnInterface", "GroupBox", nullptr));
        logOnComfirm->setText(QApplication::translate("logOnInterface", "\347\241\256\350\256\244", nullptr));
        logOnCancel->setText(QApplication::translate("logOnInterface", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logOnInterface: public Ui_logOnInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGONINTERFACE_H
