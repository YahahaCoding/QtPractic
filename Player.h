#pragma once

#include <QObject>

class Player : public QObject
{
	Q_OBJECT

public:
	Player(QObject *parent);
	~Player();

private:
	QString userName;
	QString level;
	int headPortraiNumber;
	int exp;
	int rateOfWinning;
};
