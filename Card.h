#include <QObject>
#include <QMap>

class Card : public QObject
{
	Q_OBJECT

public:
	Card() {
	
	}
	~Card() {
	
	}
	
	QString getSeat() {
		return seat;
	}

	void setSeat(QString seat) {
		this->seat = seat;
	}

	bool getIsLocking() {
		return isLocking;
	}

	void setIsLocking(bool isLocking) {
		this->isLocking = isLocking;
	}

	QString getCardFace() {
		return cardFace;
	}

	void setCardFace(QString cardFace) {
		this->cardFace = cardFace;
		setCardPoint(cardFace);
	}

	int getCardPoint() {
		return cardPoint;
	}

	void setCardPoint(QString cardFace) {
		this->cardPoint = cardPointMapping.value(cardFace.mid(2));
	}

	void launchSkill(Card *card) {
		if ((this->getCardFace().mid(2) == "A") && (card->getCardPoint() >= 11)) {
			this->setCardPoint(card->getCardFace());
		}
	}

private:
	QString seat = nullptr;
	bool isLocking = false;
	QString cardFace = nullptr;
	QMap<QString, int> cardPointMapping{ {"A", 1},
		{"2", 2}, {"3", 3}, {"4",4}, {"5", 5}, {"6", 6}, {"7", 7},
		{"8", 8}, {"9", 9}, {"10", 10}, {"J", 11}, {"Q", 12}, {"K", 13} };
	int cardPoint = 0;
};
