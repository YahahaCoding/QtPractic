#pragma once

#include <QWidget>
#include "ui_logOnInterface.h"

class logOnInterface : public QWidget
{
	Q_OBJECT

public:
	logOnInterface(QWidget *parent = Q_NULLPTR);
	~logOnInterface();

private:
	Ui::logOnInterface ui;
};
