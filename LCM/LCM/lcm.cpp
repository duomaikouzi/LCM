#include "lcm.h"
#include "ui_lcm.h"

LCM::LCM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LCM)
{
    ui->setupUi(this);
}

LCM::~LCM()
{
    delete ui;
}

