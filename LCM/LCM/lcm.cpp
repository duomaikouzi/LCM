#include "lcm.h"
#include "ui_lcm.h"
#include "QDebug"

//测试

LCM::LCM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LCM)
{
    ui->setupUi(this);

//读取配置文件中串口相关文件
    config_port=new QSettings ("config_port.ini",QSettings::IniFormat);

//    config_port->setValue("MFCC_PORT/COM","COM1");
//    config_port->setValue("MFCC_PORT/Baudrate",19200);

//    qDebug()<<config_port->value("MFCC_PORT/COM");
//    qDebug()<<config_port->value("MFCC_PORT/Baudrate");


//根据读取结果配置串口
    LCM::PortOpen();

    LCM::UdpNetConfig();

}

LCM::~LCM()
{
    delete ui;
}

void LCM::ReceiveInfo()
{
    buffer_serial=seri_port->readAll().data();

}

//串口的打开与配置
void LCM::PortOpen()
{

     seri_port= new QSerialPort(this);
     //确认串口是否已打开，如果已打开，则关闭并清空
     if (seri_port->isOpen())
     {
         seri_port->clear();
         seri_port->close();
     }
     //从配置文件中选取串口号
     seri_port->setPortName(config_port->value("MFCC_PORT/COM").toString());  //串口端口号COM1,可通过配置文件修改

     //串口如果打开失败，则提示打开失败
     if(!seri_port->open(QIODevice::ReadWrite))
     {
         QMessageBox::information(this,"串口提示窗口","串口打开失败");
         return;
     }
     else
     {
         //从配置文件中读取波特率并配置串口，其余配置包括数据为：8，无数据流控制，无奇偶校验，停止位：1。
         seri_port->setBaudRate(config_port->value("MFCC_PORT/Baudrate").toInt());
         seri_port->setDataBits(QSerialPort::Data8);
         seri_port->setFlowControl(QSerialPort::NoFlowControl);
         seri_port->setParity(QSerialPort::NoParity);
         seri_port->setStopBits(QSerialPort::OneStop);
     }
     //qDebug()<<config_port->value("MFCC_PORT/Baudrate").toInt();

     //连接串口接收处理函数
     connect(seri_port,&QSerialPort::readyRead,this,&LCM::ReceiveInfo);

}
//绑定UDP的IP与端口号，连接网口接收处理函数
void LCM::UdpNetConfig()
{
    udp_port =new QUdpSocket (this);
    udp_port->bind(QHostAddress::LocalHost, 1230);//端口待更改

    connect(udp_port,&QUdpSocket::readyRead,this,&LCM::ReadPendingDatagrams);
    qDebug()<<"链接成功";
}

void LCM:: ReadPendingDatagrams()
{
    while (udp_port->hasPendingDatagrams())
    {
        length_buffer_net=udp_port->readDatagram(buffer_net,udp_port->pendingDatagramSize());
    }

}

void LCM::SendInfo(char *info, int len)
{
    for (int i=0;i<len;++i)
    {
        seri_port->write(info,len);
    }

}
void LCM::SendInfo(const QString &info)
{
    QByteArray sendBuf;
//    if(info.contains(""))
//    {
//        info.replace(QString(""),QString(""));
//    }
    sendBuf=info.toUtf8();
    seri_port->write(sendBuf);
}

//考虑通过回调函数实现串口和网口的功能，保证能够兼容

//void LCM::command(char *buffer,unsigned char add,unsigned char cmd)
//{

//    buffer[0]=(char)0xaa;
//    buffer[1]=(char)0x51;
//    buffer[2]=(char)add;
//    buffer[3]=(char)cmd;
//    crc_calculate(buffer,5);
//    qDebug("%d",buffer[4]);
//    qDebug("%d",buffer[5]);
//}


//void LCM::crc_calculate(char *buffer,unsigned char len)
//{
//    buffer[len-2]=0x01;
//    buffer[len-1]=0x00;
//}



//关闭按钮
void LCM::on_pushButton_exit_clicked()
{
    this->close() ;
}

void LCM::on_pushButton_poweron_clicked()
{
   command(buffer_A0,0x30,0x32);
   qDebug()<<buffer_A0[4];
   qDebug()<<buffer_A0[5];
}


void LCM::on_pushButton_clicked()
{

}
