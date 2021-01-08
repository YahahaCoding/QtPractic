#ifndef CHATTOOL_H
#define CHATTOOL_H

#include <QDialog>
#include "ui_chattool.h"

namespace Ui {
class ChatTool;
}

class ChatTool : public QDialog
{
    Q_OBJECT

public:
    explicit ChatTool(QWidget *parent = nullptr);
    ~ChatTool();

    QByteArray encapsulatingMessages(QString data) {
        QByteArray dataArray = data.toUtf8();
        return dataArray;
    }

    void chatToolSendMessage(QString data) {
        emit askForSendMessage(data);
        ui->textBrowser->append(tr("\r\n发：") + data);
        ui->lineEdit->clear();
    }

signals:
    void askForSendMessage(QString);

private slots:
    void on_sendButton_clicked(){
        QString data = ui->lineEdit->text();       
        chatToolSendMessage(data);
    }

    void receiveNews(QString msg){
        ui->textBrowser->append(tr("\r\n收：") + msg);
    }

    void sendReadyNews(bool isReady) {
        QString data;
        if (isReady) {
            data = "我准备好了。";
        }
        else if (!isReady) {
            data = "我不准备了。";
        }
        chatToolSendMessage(data);
    }

    void receiveSystemNews(QString msg) {
        ui->textBrowser->append(tr("\r\n系统：") + msg);
    }

private:
    Ui::ChatTool *ui;
};

#endif // CHATTOOL_H
