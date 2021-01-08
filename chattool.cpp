#include "chattool.h"
#include "ui_chattool.h"

ChatTool::ChatTool(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatTool)
{
    ui->setupUi(this);
}

ChatTool::~ChatTool()
{
    delete ui;
}
