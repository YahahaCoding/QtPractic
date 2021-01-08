#ifndef WARPOKER_H
#define WARPOKER_H

#include <QMainWindow>
#include <qmap.h>
#include <QTime>
#include <QFileDialog>
#include <qmessagebox.h>
#include "qgraphicseffect.h"
#include "config.h"
#include "chattool.h"
#include "CardOperate.h"
#include "Card.h"
#include "ui_warpoker.h"
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

QT_BEGIN_NAMESPACE
namespace Ui { class WarPoker; }
QT_END_NAMESPACE

inline int pokerNumbers() {
    return 54;
}

inline int handCardNumbers() {
    return 9;
}

class WarPoker : public QMainWindow
{
    Q_OBJECT

public:
    WarPoker(QWidget *parent = nullptr);
    ~WarPoker();

    void shuffleTheCards(QString cardFileName) {
        QString pokerFileName;
        for (int i = 0; i < pokerNumbers(); i++) {
            pokerFileName = cardFileName + pokerFileName.sprintf("%d", i+1);
            cardLib.insert(i, pokerFileName);
        }
        qDebug() << cardLib;
    }

    int getTheTopCardNumber() {
        return (cardLib.size() - 1);
    }

    int getTheTopLocalCardNumber() {
        return (localCards.size() - 1);
    }

    int getTheTopDistanceCardNumber() {
        return (distanceCards.size() - 1);
    }

    void drawOneCardFromLib(int number) {
        qDebug() << getTheTopCardNumber();
        cardLib.erase(cardLib.find(number));
        cardLib.insert(number, cardLib[getTheTopCardNumber()]);
        cardLib.erase(cardLib.find(getTheTopCardNumber()));
    }

    QString getOneCardFromLib() {
        int number = (qrand() % (getTheTopCardNumber() - 0 + 1)) + 0;
        QString cardName = cardLib[number];
        drawOneCardFromLib(number);
        qDebug() << "libNumber: " << number;

        return cardName;
    }

    void labelInit() {
        label.insert(0, ui->handCard1);
        label.insert(1, ui->handCard2);
        label.insert(2, ui->handCard3);
        label.insert(3, ui->handCard4);
        label.insert(4, ui->handCard5);
        label.insert(5, ui->handCard6);
        label.insert(6, ui->handCard7);
        label.insert(7, ui->handCard8);
        label.insert(8, ui->handCard9);
        
        selfCard.insert(0, selfCard1);
        selfCard.insert(1, selfCard2);
        selfCard.insert(2, selfCard3);
        selfCard.insert(3, selfCard4);
        selfCard.insert(4, selfCard5);
        selfCard.insert(5, selfCard6);
        selfCard.insert(6, selfCard7);
        selfCard.insert(7, selfCard8);
        selfCard.insert(8, selfCard9);

        enemyCard.insert(0, enemyCard1);
        enemyCard.insert(1, enemyCard2);
        enemyCard.insert(2, enemyCard3);
        enemyCard.insert(3, enemyCard4);
        enemyCard.insert(4, enemyCard5);
        enemyCard.insert(5, enemyCard6);
        enemyCard.insert(6, enemyCard7);
        enemyCard.insert(7, enemyCard8);
        enemyCard.insert(8, enemyCard9);

        ui->cardConfirm->setEnabled(false);
    }

    void refreshAllCardSelect() {
        for (int i = 0; i < localCards.size(); i++) {
            label[i]->setGraphicsEffect(nullptr);
        }
    }

    void showCardSelect(CardOperate* label) {
        QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect();
        refreshAllCardSelect();
        shadow->setBlurRadius(50);
        shadow->setColor(QColor("gold"));
        shadow->setOffset(0.0); //because QGraphicsDropShadowEffect is a son of parent, the shadow will be delete 
                                //automatic.
        label->setGraphicsEffect(shadow);
        qDebug() << shadow;
        //_CrtDumpMemoryLeaks();
    }

    bool captureCard(CardOperate* currentOperator) {
        int number = label.key(currentOperator);
        qDebug() << selfCard[number]->getSeat();
        if (selfCard[number]->getSeat().mid(0,4) == "hand") {          
            if (currentCapture != localCards[label.key(currentOperator)]) {
                currentCapture = localCards[label.key(currentOperator)];
                return true;
            }
            else if (currentCapture == localCards[label.key(currentOperator)]) {
                currentCapture = nullptr;
                return false;
            }
        }

        return true;
        qDebug() << "bug:" <<label.key(currentOperator);
    }

    QString getCurrentCapturedCard() {
        return currentCapture;
    }

    QString cardMapping(int number) {
        qDebug() << "花色：" << number;
        QMap<int, QString> attribute;
        QMap<int, QString> point;
        attribute.insert(0, "方片");
        attribute.insert(1, "梅花");
        attribute.insert(2, "红桃");
        attribute.insert(3, "黑桃");
        point.insert(0, "K");
        point.insert(1, "A");
        point.insert(2, "2");
        point.insert(3, "3");
        point.insert(4, "4");
        point.insert(5, "5");
        point.insert(6, "6");
        point.insert(7, "7");
        point.insert(8, "8");
        point.insert(9, "9");
        point.insert(10, "10");
        point.insert(11, "J");
        point.insert(12, "Q");
        int number1 = (number - 1) / 13;
        int number2 = number % 13;

        if (number == 53) {
            return "黑鬼";
        }
        else if (number == 54) {
            return "白鬼";
        }
        return attribute[number1] + point[number2];
    }

    void refreshTheHandCards() {
        for (int i = 0; i < localCards.size(); i++) {
            label[i]->clear();
        }
        showTheHandCards();
    }

    void refreshTheCardsOnTheRoad(QString road) {
        QMap<QString, CardOperate*> mapping{ {"leftRoad", ui->myCard1},
                                             {"centerRoad", ui->myCard2},
                                             {"rightRoad", ui->myCard3} };

        QString str;
        for (int i = 0; i < selfCard.size(); i++) {
            if (selfCard[i]->getSeat() == road) {
                str = str + "  " + selfCard[i]->getCardFace();
            }
        }
        mapping[road]->setText(str);
    }

    void refreshTheEnemyCardsOnTheRoad(QString road) {
        QMap<QString, CardOperate*> mapping{ {"leftRoad", ui->enemyCard1},
                                             {"centerRoad", ui->enemyCard2},
                                             {"rightRoad", ui->enemyCard3} };

        QString str;
        for (int i = 0; i < enemyCard.size(); i++) {
            if (enemyCard[i]->getSeat() == road) {
                str = str + " " + enemyCard[i]->getCardFace();
            }
        }
        mapping[road]->setText(str);
    }

    void refreshTheCurrentCapture() {
        currentCapture = "noCapture";
    }

    void recoverOperationTimes() {
        operationTimes = 3;
        ui->cardConfirm->setEnabled(false);
    }

    void consumeOperationTimes() {
        if (operationTimes != 0)
            operationTimes = operationTimes - 1;
        ui->cardConfirm->setEnabled(isOperationTimesExhausted());
    }

    bool isOperationTimesExhausted() {
        return ((operationTimes <= 0) ? true : false);
    }

    void increaseRounds() {
        rounds++;
    }

    bool isRunsOut() {
        return ((rounds >= 3) ? true : false);
    }

    void newRoundInit() {
        increaseRounds();
        if (!isRunsOut()) {
            recoverOperationTimes();
            askInitForNewRound();
        }
        else if (isRunsOut())
            arenaForCards(selfCard, enemyCard);
    }

    bool isLeftRoadBattleWin(QMap<int, Card*> selfCards, QMap<int, Card*> enemyCards) {
        int ownGrades = 0;
        int enemyGrades = 0;
        for (int i = 0; i < selfCards.size(); i++) {
            if (selfCards[i]->getSeat() == "leftRoad")
                ownGrades = ownGrades + selfCards[i]->getCardPoint();
        }
        for (int i = 0; i < enemyCards.size(); i++) {
            if (enemyCards[i]->getSeat() == "leftRoad")
                enemyGrades = enemyGrades + enemyCards[i]->getCardPoint();
        }
        return (ownGrades > enemyGrades ? true : false);
    }

    bool isRightRoadBattleWin(QMap<int, Card*> selfCards, QMap<int, Card*> enemyCards) {
        int ownGrades = 0;
        int enemyGrades = 0;
        for (int i = 0; i < selfCards.size(); i++) {
            if (selfCards[i]->getSeat() == "rightRoad")
                ownGrades = ownGrades + selfCards[i]->getCardPoint();
        }
        for (int i = 0; i < enemyCards.size(); i++) {
            if (enemyCards[i]->getSeat() == "rightRoad")
                enemyGrades = enemyGrades + enemyCards[i]->getCardPoint();
        }
        return (ownGrades > enemyGrades ? true : false);
    }

    bool isCenterRoadBattleWin(QMap<int, Card*> selfCards, QMap<int, Card*> enemyCards) {
        int ownGrades = 0;
        int enemyGrades = 0;
        for (int i = 0; i < selfCards.size(); i++) {
            if (selfCards[i]->getSeat() == "centerRoad")
                ownGrades = ownGrades + selfCards[i]->getCardPoint();
        }
        for (int i = 0; i < enemyCards.size(); i++) {
            if (enemyCards[i]->getSeat() == "centerRoad")
                enemyGrades = enemyGrades + enemyCards[i]->getCardPoint();
        }
        return (ownGrades > enemyGrades ? true : false);
    }

    void arenaForCards(QMap<int, Card*> selfCards, QMap<int, Card*> enemyCards) {
        for (int i = 0; i < selfCards.size(); i++) {
            for (int j = 0; j < enemyCards.size(); j++) {
                selfCards[i]->launchSkill(enemyCards[j]);
            }
        }
        for (int i = 0; i < enemyCards.size(); i++) {
            for (int j = 0; j < selfCards.size(); j++) {
                enemyCards[i]->launchSkill(selfCards[j]);
            }
        }
        if (isLeftRoadBattleWin(selfCards, enemyCards))
            pointOfWin++;
        if (isRightRoadBattleWin(selfCards, enemyCards))
            pointOfWin++;
        if (isCenterRoadBattleWin(selfCards, enemyCards))
            pointOfWin++;
        qDebug() << "胜利点数" << pointOfWin;
        if(pointOfWin >= 2)
            QMessageBox::information(nullptr, tr("胜负"), tr("你胜利了！"),QMessageBox::Ok, QMessageBox::Ok);
        else
            QMessageBox::information(nullptr, tr("胜负"), tr("你失败了！"), QMessageBox::Ok, QMessageBox::Ok);
    }

signals:
    void askForShowTheConfig();
    void askForShowTheChatTool(int,int);
    void askForHideTheChatTool();
    void askForSendReady();
    void askForSendCancelReady();
    void askForSendDistanceCards(QMap<int, QString>, bool, QString);
    void askForSendTheCardsOnRoad(QMap<int, Card*>);
    void askInitForNewRound();

private slots:
    void on_actionconfig_triggered(){
        emit askForShowTheConfig();
    }

    void on_chatTool_clicked(){
        if(ui->chatTool->text() == "展开聊天框"){
            emit askForShowTheChatTool(this->frameGeometry().x() + this->frameGeometry().width(),
                                       this->frameGeometry().y());
            ui->chatTool->setText("收起聊天框");
         }
        else{
            emit askForHideTheChatTool();
            ui->chatTool->setText("展开聊天框");

        }
    }

    void on_readyButton_clicked(){
        if (ui->readyButton->text() == "准备") {
            ui->readyButton->setText("取消准备");
            emit askForSendReady();
        }
        else if (ui->readyButton->text() == "取消准备") {
            ui->readyButton->setText("准备");
            emit askForSendCancelReady();
        }
    }

    void setTheReadyButton(bool isEnable) {
        ui->readyButton->setEnabled(isEnable);
        if (!isEnable)
            ui->readyButton->setText("游戏中");
    }

    void disableTheReadyButton() {
        ui->readyButton->setEnabled(true);
    }

    void dealLicensing() {
        for (int i = 0; i < handCardNumbers(); i++) {
            localCards.insert(i, getOneCardFromLib());
            mappingCards(i, localCards);
            //selfCard[i]->setCardFace(cardMapping(localCards[i].mid(16).toInt()));
            qDebug() << "localCards: " << i << localCards[i] << "myCards: " << selfCard[i]->getCardFace();
            distanceCards.insert(i, getOneCardFromLib());
            qDebug() << "enemyCards: " << i << distanceCards[i];
        }
        emit askForSendDistanceCards(distanceCards, true, nullptr);
    }

    void receiveCards(int number, QString cardName) {
        localCards.insert(number, cardName);
        mappingCards(number, localCards);
        //selfCard[number]->setCardFace(cardMapping(localCards[number].mid(16).toInt()));
        qDebug() << "分到的手牌：" << cardName;
    }

    void mappingCards(int number, QMap<int, QString> cards) {
        selfCard[number]->setCardFace(cardMapping(cards[number].mid(16).toInt()));
        QString strNum;
        strNum = strNum.sprintf("%d", number);
        selfCard[number]->setSeat("hand" + strNum);
    }

    void showTheHandCards() {
        QImage* img = new QImage;
        for (int i = 0; i < localCards.size(); i++) {
            if (selfCard[i]->getSeat().mid(0, 4) == "hand") {
                QString localPath = QDir::currentPath();
                QString pictureFile = "/pukeImage_veryhuo.com/" + localCards[i] + ".jpg";
                QString path = QDir::fromNativeSeparators(localPath) + pictureFile;
                qDebug() << path;
                img->load(path); //加载图像
                label[i]->setPixmap(QPixmap::fromImage(*img));
            }
        }
        delete img;
    }

    void selectCard(CardOperate* currentOperator) {
        bool isCapture = captureCard(currentOperator);
        if (isCapture) {
            showCardSelect(currentOperator);
        }
        else if (!isCapture) {
            refreshAllCardSelect();
        }
        qDebug() << currentOperator;
    }

    void leftRoadButtonClicked() {
        if ((currentCapture != "noCapture") && !isOperationTimesExhausted()) {
            selfCard[localCards.key(currentCapture)]->setSeat("leftRoad");
            consumeOperationTimes();
        }
        refreshTheHandCards();
        refreshTheCardsOnTheRoad("leftRoad");
        refreshTheCurrentCapture();
    }

    void centerRoadButtonClicked() {
        if ((currentCapture != "noCapture") && !isOperationTimesExhausted()) {
            selfCard[localCards.key(currentCapture)]->setSeat("centerRoad");
            consumeOperationTimes();
        }
        refreshTheHandCards();
        refreshTheCardsOnTheRoad("centerRoad");
        refreshTheCurrentCapture();
    }

    void rightRoadButtonClicked() {
        if ((currentCapture != "noCapture") && !isOperationTimesExhausted()) {
            selfCard[localCards.key(currentCapture)]->setSeat("rightRoad");
            consumeOperationTimes();
        }
        refreshTheHandCards();
        refreshTheCardsOnTheRoad("rightRoad");
        refreshTheCurrentCapture();
    }

    void recoveryButtonClicked() {
        for (int i = 0; i < selfCard.size(); i++) {
            if (selfCard[i]->getIsLocking() == false) {
                selfCard[i]->setSeat("hand");
            }
        }
        refreshTheHandCards();
        refreshTheCardsOnTheRoad("leftRoad");
        refreshTheCardsOnTheRoad("centerRoad");
        refreshTheCardsOnTheRoad("rightRoad");
        refreshTheCurrentCapture();
        recoverOperationTimes();
    }

    void cardConfirmButtonClicked() {
        for (int i = 0; i < selfCard.size(); i++) {
            if ((selfCard[i]->getSeat() == "leftRoad")||
            (selfCard[i]->getSeat() == "rightRoad")|| 
            (selfCard[i]->getSeat() == "centerRoad")) 
            selfCard[i]->setIsLocking(true);
        }
        ui->cardConfirm->setEnabled(false);
        emit askForSendTheCardsOnRoad(selfCard);
    }

    void showTheEnemyCards() {
        refreshTheEnemyCardsOnTheRoad("leftRoad");
        refreshTheEnemyCardsOnTheRoad("centerRoad");
        refreshTheEnemyCardsOnTheRoad("rightRoad");
        newRoundInit();
    }

    void updateEnemyCardNumbers(bool isUp) {
        if (isUp)
            enemyCardNumbers++;
        else if (!isUp)
            enemyCardNumbers--;
    }

    int getEnemyCardNumbers() {
        return enemyCardNumbers;
    }

    void setEnemyCard(int number, QString cardFace, QString road) {
        enemyCard[number]->setCardFace(cardFace);
        enemyCard[number]->setCardPoint(cardFace);
        enemyCard[number]->setSeat(road);
    }

    void recordTheEnemyCards(QString road, QString cardFace, QString cardPoint) {
        if (getEnemyCardNumbers() < 9) {
            if (road == "左路") {
                setEnemyCard(getEnemyCardNumbers(), cardFace, "leftRoad");
                updateEnemyCardNumbers(true);
            }
            else if (road == "中路") {
                setEnemyCard(getEnemyCardNumbers(), cardFace, "centerRoad");
                updateEnemyCardNumbers(true);
            }
            else if (road == "右路") {
                setEnemyCard(getEnemyCardNumbers(), cardFace, "rightRoad");
                updateEnemyCardNumbers(true);
            }
        }
    }

private:
    Ui::WarPoker *ui;
    int leftCardNumbers;
    QMap<int, QString> cardLib;
    QMap<int, QString> localCards;
    QMap<int, QString> distanceCards;
    QMap<int, CardOperate*> label;
    QMap<int, Card*> selfCard;
    QString currentCapture;
    Card *selfCard1 = new Card();
    Card *selfCard2 = new Card();
    Card *selfCard3 = new Card();
    Card *selfCard4 = new Card();
    Card *selfCard5 = new Card();
    Card *selfCard6 = new Card();
    Card *selfCard7 = new Card();
    Card *selfCard8 = new Card();
    Card *selfCard9 = new Card();
    QMap<int, Card*> enemyCard;
    Card* enemyCard1 = new Card();
    Card* enemyCard2 = new Card();
    Card* enemyCard3 = new Card();
    Card* enemyCard4 = new Card();
    Card* enemyCard5 = new Card();
    Card* enemyCard6 = new Card();
    Card* enemyCard7 = new Card();
    Card* enemyCard8 = new Card();
    Card* enemyCard9 = new Card();
    int enemyCardNumbers = 0;
    int operationTimes = 3;
    int rounds = 0;
    int pointOfWin = 0;
};
#endif // WARPOKER_H
