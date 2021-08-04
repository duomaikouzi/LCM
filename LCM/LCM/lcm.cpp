#include "lcm.h"
#include "ui_lcm.h"
#include "QDebug"


//测试

LCM::LCM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LCM)
{
    ui->setupUi(this);
    config_port=new QSettings ;

}

LCM::~LCM()
{
    delete ui;
}

