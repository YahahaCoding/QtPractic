#ifndef CARD_OPERATE_H
#define CARD_OPERATE_H

#include <QLabel>
#include <QMouseEvent>

class CardOperate : public QLabel
{
    Q_OBJECT

public:
    explicit CardOperate(QWidget* parent) :
        QLabel(parent) {
        QPalette pa;
        pa.setColor(QPalette::WindowText, nullptr);
        setPalette(pa);
    }

    CardOperate(const QString& text, QWidget* parent) :
        QLabel(parent)
    {
        setText(text);
    }

signals:
    void askForSelectCard(CardOperate*);

protected:
    void mouseReleaseEvent(QMouseEvent* event) {
        if (event->button() == Qt::LeftButton)
            emit askForSelectCard(this);
    }

    void enterEvent(QEvent*) {
        QPalette pa;
        pa.setColor(QPalette::WindowText, Qt::blue);
        setPalette(pa);
    }

    void leaveEvent(QEvent*) {
        QPalette palette;
        palette .setColor(QPalette::WindowText, Qt::darkGreen);
        setPalette(palette);
    }

public slots:

};



#endif
