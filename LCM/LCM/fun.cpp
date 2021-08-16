#include "fun.h"

void command(char *buffer,unsigned char add,unsigned char cmd)
{

    buffer[0]=(char)0xaa;
    buffer[1]=(char)0x51;
    buffer[2]=(char)add;
    buffer[3]=(char)cmd;
    crc_calculate(buffer,5);
}


void crc_calculate(char *buffer,unsigned char len)
{
    buffer[len-2]=0x01;
    buffer[len-1]=0x00;
}
