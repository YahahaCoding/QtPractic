#pragma once

#include <QWidget>
#include "ui_LoginInterface.h"

class LoginInterface : public QWidget
{
	Q_OBJECT

public:
	LoginInterface(QWidget *parent = Q_NULLPTR);
	~LoginInterface();

private:
	Ui::LoginInterface ui;
};
