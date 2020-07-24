#ifndef _REGISTER_H
#define _REGISTER_H

#include "stdio.h"
#include "mydefine.h"

//register struct
struct Register_t
{
	u8 bits;
	u32 data;
};


void register_set_bits(struct Register_t* reg);
void register_get_hex(struct Register_t* reg);
void register_show_table(struct Table_t* reg_table);
void register_tools(struct Register_t* reg,struct Table_t* reg_table);

#endif