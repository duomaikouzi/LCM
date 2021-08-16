#ifndef FUN_H
#define FUN_H

extern void command(char *buffer,unsigned char add,unsigned char cmd);
extern void crc_calculate(char *buffer,unsigned char len);
#pragma execution_character_set("utf-8")

#endif // FUN_H
