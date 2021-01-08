#ifndef CONFIG_H
#define CONFIG_H

#include <QDialog>
#include "ui_config.h"
#include <QHostAddress>
#include <QHostInfo>

namespace Ui {
class Config;
}

class Config : public QDialog
{
    Q_OBJECT

public:
    explicit Config(QWidget *parent = nullptr);
    ~Config();
    void setLocalAddress(){
        QString hostName = QHostInfo::localHostName();
        QHostInfo hostInfo = QHostInfo::fromName(hostName);
        foreach (QHostAddress address, hostInfo.addresses()) {
            if(address.protocol() == QAbstractSocket::IPv4Protocol){
                ui->localIpEdit->setText(address.toString());
            }
        }
        QHostAddress ip(ui->localIpEdit->text());
        localAddress = ip;
    }

    QHostAddress getLocalAddress(){
        return localAddress;
    }

    void setLocalPort(){
        QString port = ui->localPortEdit->text();
        localPort = port.toUShort();
    }

    quint16 getLocalPort(){
        return localPort;
    }

    void setDistanceAddress(){
        QString ip = ui->distanceIpEdit->text();
        QHostAddress address(ip);
        distanceAddress = address;
    }

    QHostAddress getDistanceAddress(){
        return distanceAddress;
    }

    void setDistancePort(){
        quint16 port = ui->distancePortEdit->text().toUShort();
        distancePort = port;
    }

    quint16 getDistancePort(){
        return distancePort;
    }
signals:
    void confirmClicked(QHostAddress,QHostAddress,quint16,quint16);

private slots:
    void on_buttonBox_accepted(){
        setLocalPort();
        setDistancePort();
        setDistanceAddress();
        emit confirmClicked(getDistanceAddress(),getLocalAddress(),getDistancePort(),getLocalPort());
    }

    void setTheAccepetButton(bool isEnable) {
        ui->buttonBox->setEnabled(isEnable);
    }

private:
    Ui::Config *ui;
    QHostAddress distanceAddress;
    QHostAddress localAddress;
    quint16 distancePort;
    quint16 localPort;
};

#endif // CONFIG_H
