#include "lcm.h"
#include "ui_lcm.h"
#include "QDebug"


//测试

LCM::LCM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LCM)
{
    ui->setupUi(this);

//读取配置文件中串口相关配置
    config_port=new QSettings ("config_port.ini",QSettings::IniFormat);

    config_port->setValue("MFCC_PORT/COM","COM1");
    config_port->setValue("MFCC_PORT/Baudrate",19200);

    qDebug()<<config_port->value("MFCC_PORT/COM");
    qDebug()<<config_port->value("MFCC_PORT/Baudrate");


//根据读取结果配置串口

}

LCM::~LCM()
{
    delete ui;
}


