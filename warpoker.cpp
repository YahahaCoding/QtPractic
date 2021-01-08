#include "warpoker.h"
#include "ui_warpoker.h"

WarPoker::WarPoker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WarPoker)
{
    ui->setupUi(this);
    QObject::connect(ui->handCard1, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard2, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard3, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard4, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard5, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard6, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard7, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard8, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));
    QObject::connect(ui->handCard9, SIGNAL(askForSelectCard(CardOperate*)), this, SLOT(selectCard(CardOperate*)));

    QObject::connect(ui->leftRoad, SIGNAL(clicked()), this, SLOT(leftRoadButtonClicked()));
    QObject::connect(ui->centerRoad, SIGNAL(clicked()), this, SLOT(centerRoadButtonClicked()));
    QObject::connect(ui->rightRoad, SIGNAL(clicked()), this, SLOT(rightRoadButtonClicked()));
    QObject::connect(ui->recovery, SIGNAL(clicked()), this, SLOT(recoveryButtonClicked()));
    QObject::connect(ui->cardConfirm, SIGNAL(clicked()), this, SLOT(cardConfirmButtonClicked()));

    shuffleTheCards("veryhuo.com_pkp_");
    qsrand(time(nullptr));
    labelInit();

    //selectCard(1);
}

WarPoker::~WarPoker()
{
    delete ui;
}