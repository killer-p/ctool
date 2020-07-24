#include "register.h"

void register_set_bits(struct Register reg)
{	
	int bits=0;
	printf("select register bit num:\r\n");
	printf("1,8bit 2,16bit 3,32bits \r\n");
	scanf("%d",&bits);
	switch(bits)
	{
	case 1:
		reg.bits=8;
		break;
	case 2:
		reg.bits=16;
		break;
	case 3:
		reg.bits=32;
		break;
	}
}

void register_get_hex(struct Register reg)
{
	printf("input regitster data in hex:\r\n");
	scanf("%d",&reg.data);
}

void register_show_table(struct Register reg)
{

}