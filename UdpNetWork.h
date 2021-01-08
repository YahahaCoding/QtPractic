#ifndef UDPNETWORK_H
#define UDPNETWORK_H

#include <QHostAddress>
#include <QHostInfo>
#include <QUdpSocket>
#include <qmessagebox.h>
#include "chattool.h"
#include "config.h"
#include "warpoker.h"
#include "FingerGuessing.h"
#include "LoginInterface.h"
#include "logOnInterface.h"
#include "ResetPassword.h"

inline int initialState() {
    return 0;
}

inline int waitReadyState() {
    return 1;
}

inline int readyState() {
    return 2;
}

inline int onTheOffensive() {
    return 0;
}

inline int defensivePosition() {
    return 1;
}

inline int draw() {
    return 2;
}

inline int waitResult() {
    return 3;
}

inline int win() {
    return 0;
}

inline int lose() {
    return 1;
}

QT_BEGIN_NAMESPACE
namespace warPokerUi { class WarPoker; }
namespace configUi { class Config; }
namespace chatToolUi { class ChatTool; }
QT_END_NAMESPACE

class UdpNetWork : QObject{
    Q_OBJECT

private:
    WarPoker *mainWindow = new WarPoker();
    Config *config = new Config();
    ChatTool *chatTool = new ChatTool();
    FingerGuessing* fingerGuessing = new FingerGuessing();
    LoginInterface* logIn = new LoginInterface();
    logOnInterface* logOn = new logOnInterface();
    ResetPassword* resetPassword = new ResetPassword();
    QUdpSocket *receiver = new QUdpSocket();
    QUdpSocket *sender = new QUdpSocket();

public:
    UdpNetWork(){
        //conncet to the player
        QObject::connect(this,SIGNAL(askForShowTheFingerGuessing()),this,SLOT(showTheFingerGuessing()));

        //connect to the fingerGuessing
        QObject::connect(fingerGuessing, SIGNAL(askForSendTheGesture(int)), 
            this, SLOT(receiveLocalGesture(int)));

        //connect to the warPoker
        mainWindow->show();
        QObject::connect(mainWindow,SIGNAL(askForShowTheConfig()),this,SLOT(showTheConfig()));
        QObject::connect(mainWindow,SIGNAL(askForShowTheChatTool(int,int)),this,SLOT(showTheChatTool(int,int)));
        QObject::connect(mainWindow,SIGNAL(askForHideTheChatTool()),this,SLOT(hideTheChatTool()));
        QObject::connect(this,SIGNAL(callTheWarPokerForLicensing()),mainWindow,SLOT(dealLicensing()));
        QObject::connect(mainWindow,SIGNAL(askForSendReady()),this,SLOT(sendReady()));
        QObject::connect(mainWindow, SIGNAL(askForSendCancelReady()), this, SLOT(sendCancelReady()));
        QObject::connect(mainWindow, SIGNAL(askForSendDistanceCards(QMap<int, QString>, bool, QString)),
            this, SLOT(sendTheDistanceCards(QMap<int, QString>, bool, QString)));
        QObject::connect(this, SIGNAL(callTheWarPokerForCards(int, QString)),
            mainWindow, SLOT(receiveCards(int, QString)));
        QObject::connect(this, SIGNAL(callTheWarPokerShowHandCards()), mainWindow, SLOT(showTheHandCards()));
        QObject::connect(this, SIGNAL(callTheWarPokerSetReadyButton(bool)), mainWindow, SLOT(setTheReadyButton(bool)));
        QObject::connect(mainWindow, SIGNAL(askForSendTheCardsOnRoad(QMap<int, Card*>)), 
            this, SLOT(sendTheCardsOnRoad(QMap<int, Card*>)));
        QObject::connect(this, SIGNAL(callTheWarPokerShowTheEnemyCards()), mainWindow, SLOT(showTheEnemyCards()));
        QObject::connect(this, SIGNAL(callTheWarPokerRecordTheEnemyCards(QString, QString, QString)),
            mainWindow, SLOT(recordTheEnemyCards(QString, QString, QString)));
        QObject::connect(mainWindow, SIGNAL(askInitForNewRound()), this, SLOT(initForNewRound()));
        //emit callTheWarPokerForLicensing(); //only for test

        //connect to the config
        QObject::connect(config, SIGNAL(confirmClicked(QHostAddress,QHostAddress,quint16,quint16)),
                         this, SLOT(configConfirm(QHostAddress,QHostAddress,quint16,quint16)));
        QObject::connect(this, SIGNAL(callTheConfigSetAcceptButton(bool)), config, SLOT(setTheAccepetButton(bool)));

        //conncet to the chatTool
        QObject::connect(chatTool,SIGNAL(askForSendMessage(QString)),
                         this,SLOT(sendMessage(QString)));
        QObject::connect(this,SIGNAL(callTheChatToolForNews(QString)),chatTool,SLOT(receiveNews(QString)));
        QObject::connect(this, SIGNAL(callTheChatToolForSendReadyNews(bool)), chatTool, SLOT(sendReadyNews(bool)));
        QObject::connect(this, SIGNAL(callTheChatToolForSystemNews(QString)), chatTool, SLOT(receiveSystemNews(QString)));
    
        //conncet to the logOnInterface


        //connect to the logInInterface


        //connect to the resetPassword

    }
    ~UdpNetWork(){
        delete mainWindow;
        delete config;
        delete chatTool;
        delete fingerGuessing;
        delete receiver;
        delete sender;
    }

    void dealChatMessage(QString msg) {
        QString str = msg.mid(3);
        emit callTheChatToolForNews(str);
    }

    void sendAddress(QHostAddress address) {
        QByteArray ip = address.toString().toUtf8();
        sender->writeDatagram(ip, distanceAddress, distancePort);
    }

    void updateState(bool isUp) {
        if (isUp) {
            state++;
            if (state == readyState()) {
                emit callTheChatToolForSystemNews("游戏开始！");
                emit askForShowTheFingerGuessing();
                emit callTheWarPokerSetReadyButton(false);
            }
        }
        else if (!isUp && state != readyState()) {
            state = initialState();
        }

        qDebug() << "current state is :" << state;
    }

    int getState() {
        return state;
    }

    void updateGamingState(bool isUp) {
        if (isUp) {
            gamingState++;
            if (gamingState == readyState()) {
                emit callTheWarPokerShowTheEnemyCards();
            }
        }
        else if (!isUp) {
            gamingState = initialState();
        }
    }

    int getGamingState() {
        return gamingState;
    }

    void setLocalGesture(int localGesture) {
        this->localGesture = localGesture;
    }

    int getLocalGesture() {
        return localGesture;
    }

    void setDistanceGesture(int distanceGesture) {
        this->distanceGesture = distanceGesture;
    }

    int getDistanceGesture() {
        return distanceGesture;
    }

    int fingerGuessingGame(int localGesture, int distanceGesture) {
        int result = localGesture - distanceGesture;
        if (result == -1 || result == 2)
            return win();
        else if (result == 1 || result == -2)
            return lose();
        else if (result == 0)
            return draw();
        return waitResult();
    }

    void setStatus(int status) {
        this->status = status;
    }

    int getStatus() {
        return status;
    }

    void determineTheOrder() {
        int fingerGuessingResult = fingerGuessingGame(getLocalGesture(), getDistanceGesture());
        qDebug() << "localGesture is :" << getLocalGesture() << "distanceGesture is :" << getDistanceGesture();
        if (getStatus() == draw()) {
            if (fingerGuessingResult == win())
                setStatus(onTheOffensive());
            else if (fingerGuessingResult == lose())
                setStatus(defensivePosition());
            else if (fingerGuessingResult == draw()) {
                setLocalGesture(noGesture());
                setDistanceGesture(noGesture());
                fingerGuessing->show();
            }
            qDebug() << "guessingResult is :" << fingerGuessingResult;
        }
        else {
            fingerGuessing->hide();
        }
        if (getStatus() == onTheOffensive())
            emit callTheWarPokerForLicensing();
        qDebug() << "current status is :" << getStatus();
    }

    void sendToAnotherUdpSockect(QString str) {
        QByteArray gestureMsg = chatTool->encapsulatingMessages(str);
        sender->writeDatagram(gestureMsg, distanceAddress, distancePort);
    }

    void dealTheCardFaceAndPointMsg(QString msg) {
        QStringList strList;
        strList = msg.split("+");
        QString road = msg.mid(0, 2);
        QString cardFace = strList.at(1);
        QString cardPoint = strList.at(2);
        emit callTheWarPokerRecordTheEnemyCards(road, cardFace, cardPoint);
    }

signals:
    void callTheChatToolForNews(QString);
    void callTheChatToolForSendReadyNews(bool);
    void callTheChatToolForSystemNews(QString);
    void askForShowTheFingerGuessing();
    void callTheWarPokerForLicensing();
    void callTheWarPokerForCards(int, QString);
    void callTheWarPokerShowHandCards();
    void callTheWarPokerSetReadyButton(bool);
    void callTheConfigSetAcceptButton(bool);
    void callTheWarPokerRecordTheEnemyCards(QString,QString,QString);
    void callTheWarPokerShowTheEnemyCards();

public slots:
    //connect to the player
    void showTheFingerGuessing() {
        fingerGuessing->show();
    }

    //connect to the fingerGuessing
    void receiveLocalGesture(int gesture) {
        fingerGuessing->hide();
        setLocalGesture(gesture);
        QString localGesture;
        localGesture = localGesture.sprintf("%d", getLocalGesture());
        sendToAnotherUdpSockect("猜拳：" + localGesture);
        qDebug() << "the gesture i sent is :" << getLocalGesture();
        determineTheOrder();
    }

    //conncet to the warPoker
    void showTheConfig() {
        config->show();
    }

    void showTheChatTool(int x, int y) {
        chatTool->show();
        chatTool->move(x, y);
    }

    void hideTheChatTool() {
        chatTool->hide();
    }

    void sendReady() {
        sendToAnotherUdpSockect("ready");
        emit callTheChatToolForSendReadyNews(true);
        updateState(true);
        emit callTheConfigSetAcceptButton(false);
    }

    void sendCancelReady() {
        sendToAnotherUdpSockect("cancelReady");
        emit callTheChatToolForSendReadyNews(false);
        updateState(false);
        emit callTheConfigSetAcceptButton(true);
    }

    void sendTheDistanceCards(QMap<int, QString> distanceCards, bool isFirst, QString checkCard) {
        //static QMap<int, QString> cards;
        cards.swap(distanceCards);
        QString cardNumber;
        if (isFirst) {
            cardNumber = cardNumber.sprintf("%d", cards.size() - 1);
            sendToAnotherUdpSockect("发牌：" + cardNumber + cards[cards.size() - 1]);
        }
        else if (!isFirst) {
            if (cards[cards.size() - 1] == checkCard) {
                cards.erase(cards.find(cards.size() - 1));
                if (!cards.isEmpty()) {
                    cardNumber = cardNumber.sprintf("%d", cards.size() - 1);
                    sendToAnotherUdpSockect("发牌：" + cardNumber + cards[cards.size() - 1]);
                    qDebug() << "checkOk";
                }
                else if (cards.isEmpty()) {
                    emit callTheWarPokerShowHandCards();
                    sendToAnotherUdpSockect("开牌：");
                }

            }
            else if (cards[cards.size() - 1] != checkCard) {
                cardNumber = cardNumber.sprintf("%d", cards.size() - 1);
                sendToAnotherUdpSockect("发牌：" + cardNumber + cards[cards.size() - 1]);
                qDebug() << "checkNoOk";
            }
        }
    }

    void sendTheCardsOnRoad(QMap<int, Card*> selfCards) {
        for (int i = 0; i < selfCards.size(); i++) {
            if (selfCards[i]->getSeat() == "leftRoad") {
                QString str;
                str = "左路：+" + selfCards[i]->getCardFace() + "+" + str.sprintf("%d", selfCards[i]->getCardPoint());
                sendToAnotherUdpSockect(str);
            }
            else if (selfCards[i]->getSeat() == "rightRoad") {
                QString str;
                str = "右路：+" + selfCards[i]->getCardFace() + "+" + str.sprintf("%d", selfCards[i]->getCardPoint());
                sendToAnotherUdpSockect(str);
            }
            else if (selfCards[i]->getSeat() == "centerRoad") {
                QString str;
                str = "中路：+" + selfCards[i]->getCardFace() + "+" + str.sprintf("%d", selfCards[i]->getCardPoint());
                sendToAnotherUdpSockect(str);
            }
        }
        sendToAnotherUdpSockect("发送场牌结束");
        updateGamingState(true);
    }

    void initForNewRound() {
        updateGamingState(false);
    }

    //connect to the config
    void configConfirm(QHostAddress distanceAddress, QHostAddress localAddress, quint16 distancePort, quint16 localPort) {
        this->distanceAddress = distanceAddress;
        this->localAddress = localAddress;
        this->distancePort = distancePort;
        this->localPort = localPort;
        bool isLinkPort = receiver->bind(localPort, QUdpSocket::ShareAddress);
        QObject::connect(receiver, SIGNAL(readyRead()), this, SLOT(dataReceived()));
        if (isLinkPort)
            QMessageBox::information(nullptr,tr("连接成功"),tr("成功连接到")+this->distanceAddress.toString(),
                QMessageBox::Ok,QMessageBox::Ok);
        qDebug() << isLinkPort;
        //emit callTheWarPokerForLicensing(); //only for test
    }

    //connect to the chatTool
    void sendMessage(QString data) {
        sendToAnotherUdpSockect("发言：" + data);
    }
   
    void dataReceived(){
        while(receiver->hasPendingDatagrams()){
            QByteArray receivedMsg;
            receivedMsg.resize(receiver->pendingDatagramSize());
            receiver->readDatagram(receivedMsg.data(),receivedMsg.size());
            QString msg = QString(receivedMsg);
            if (msg == "ready")
                updateState(true);
            else if (msg == "cancelReady")
                updateState(false);
            else if (msg.mid(0, 2) == "猜拳") {
                setDistanceGesture(msg.mid(3, 1).toInt());
                determineTheOrder();
                qDebug() << "port: " << localPort << "receive fingerGuessing.";
            }
            else if (msg.mid(0, 2) == "发牌") {
                emit callTheWarPokerForCards(msg.mid(3,1).toInt(), msg.mid(4));
                sendToAnotherUdpSockect("查牌：" + msg.mid(4));
            }
            else if (msg.mid(0, 2) == "查牌") {
                sendTheDistanceCards(cards, false, msg.mid(3));
            }
            else if (msg.mid(0, 2) == "开牌") {
                emit callTheWarPokerShowHandCards();
            }
            else if (msg.mid(0, 2) == "左路") {
                dealTheCardFaceAndPointMsg(msg);
            }
            else if (msg.mid(0, 2) == "中路") {
                dealTheCardFaceAndPointMsg(msg);
            }
            else if (msg.mid(0, 2) == "右路") {
                dealTheCardFaceAndPointMsg(msg);
            }
            else if (msg == "发送场牌结束") {
                updateGamingState(true);
            }
            else
                dealChatMessage(msg);
            qDebug() << state;
        }
    }

private:
    QHostAddress distanceAddress;
    QHostAddress localAddress;
    quint16 distancePort;
    quint16 localPort;
    int state = initialState();
    int status = draw();
    int gamingState = initialState();
    int localGesture = noGesture();
    int distanceGesture = noGesture();
    QMap<int, QString> cards;
};

#endif // UDPNETWORK_H
