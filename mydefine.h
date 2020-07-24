#ifndef _MYDEFINE_H
#define _MYDEFINE_H

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;

//ÐÐ Row ÁÐ Column
struct Table_t
{
	u8 row;
	u8 column;
	u32 data;
};

#endif