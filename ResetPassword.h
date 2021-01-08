#pragma once

#include <QWidget>
#include "ui_ResetPassword.h"

class ResetPassword : public QWidget
{
	Q_OBJECT

public:
	ResetPassword(QWidget *parent = Q_NULLPTR);
	~ResetPassword();

private:
	Ui::ResetPassword ui;
};
