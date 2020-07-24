#ifndef _REGISTER_H
#define _REGISTER_H

#include "stdio.h"
#include "mydefine.h"

//register struct
struct Register
{
	u8 bits;
	u32 data;
};


void register_set_bits(struct Register reg);
void register_get_hex(struct Register reg);
void register_show_table(struct Register reg);

#endif