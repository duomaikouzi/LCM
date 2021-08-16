#include "fun.h"
#include <QDebug>

void command(char *buffer,unsigned char add,unsigned char cmd)
{

    buffer[0]=(char)0xaa;
    buffer[1]=(char)0x51;
    buffer[2]=(char)add;
    buffer[3]=(char)cmd;
    qDebug()<<"cmd进入正常";
    crc_calculate(buffer,6);
}


void crc_calculate(char *buffer,unsigned char len)
{
    buffer[len-2]=0x01;
    buffer[len-1]=0x01;
    qDebug("%d",buffer[len-2]);
    qDebug("%d",buffer[len-1]);
    qDebug()<<"crc进入正常";
}
