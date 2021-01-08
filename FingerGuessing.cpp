#include "FingerGuessing.h"
#include "ui_FingerGuessing.h"

FingerGuessing::FingerGuessing(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::FingerGuessing();
	ui->setupUi(this);
	QObject::connect(ui->stoneButton,SIGNAL(clicked()),this,SLOT(stoneButtonClicked()));
	QObject::connect(ui->scissorsButton, SIGNAL(clicked()), this, SLOT(scissorsButtonClicked()));
	QObject::connect(ui->clothButton, SIGNAL(clicked()), this, SLOT(clothButtonClicked()));
}

FingerGuessing::~FingerGuessing()
{
	delete ui;
}
