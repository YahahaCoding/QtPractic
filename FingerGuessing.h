#pragma once

#include <QDialog>

inline int stone() {
	return 0;
}

inline int scissors() {
	return 1;
}

inline int cloth() {
	return 2;
}

inline int noGesture() {
	return 600;
}

namespace Ui { class FingerGuessing; };

class FingerGuessing : public QDialog
{
	Q_OBJECT

public:
	FingerGuessing(QWidget *parent = Q_NULLPTR);
	~FingerGuessing();

signals:
	void askForSendTheGesture(int);	

public slots:
	void stoneButtonClicked() {
		emit askForSendTheGesture(stone());
	}
	void scissorsButtonClicked() {
		emit askForSendTheGesture(scissors());
	}
	void clothButtonClicked() {
		emit askForSendTheGesture(cloth());
	}

private:
	Ui::FingerGuessing *ui;
};
