#include "lcm.h"
#include "ui_lcm.h"
#include "QDebug"
//测试

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

