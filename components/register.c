#include "register.h"

void table_print_line(u8 column,u8 width)
{
	int i;
	//画第一行 -------
	for(i=0;i<column*width;i++)
	{
		printf("-");
	}
	printf("\r\n");
}
void register_set_bits(struct Register_t* reg)
{	
	int bits=0;
	printf("select register bit num:\r\n");
	printf("1,8bit 2,16bit 3,32bits \r\n");
	scanf("%d",&bits);
	switch(bits)
	{
	case 1:
		(*reg).bits=8;
		break;
	case 2:
		(*reg).bits=16;
		break;
	case 3:
		(*reg).bits=32;
		break;
	}
}

void register_get_hex(struct Register_t* reg)
{
	printf("input regitster data in hex:\r\n");
	scanf("%x",&(reg->data));
}

void register_show_table(struct Table_t* reg_table)
{
	int i=0;
	u8 column=reg_table->column;
	u32 data=reg_table->data;

	//画第一行 -------
	table_print_line(column,8);

	//画第二行 |bit31 |bit30 |...
	if(column==8)
	{
		for(i=column-1;i>-1;i--)
		{
			printf("| bit%d  ",i);
		}
	}
	else 
	{
		for(i=column-1;i>9;i--)
		{
			printf("| bit%d ",i);
		}
		//因为二位数占两个符号，所以要给一位数增加一个空格
		for(i=9;i>-1;i--)
		{
			printf("| bit%d  ",i);
		}
	}
	printf("|\r\n");

	//画第三行 -------
	table_print_line(column,8);

	//画第四行 | x  |
	for(i=column-1;i>-1;i--)
	{
		printf("|   %d   ",(data>>i)&0x0001);
	}
	printf("|\r\n");

	//画第五行 -------
	table_print_line(column,8);

}
void register_tools(struct Register_t* reg,struct Table_t* reg_table)
{
	u8 i=1;
	register_set_bits(reg);
	
	while(i==1)
	{
		register_get_hex(reg);
		reg_table->column=reg->bits;
		reg_table->data=reg->data;
		register_show_table(reg_table);
		printf("1,continute 2,quiet\r\n");
		scanf("%d",&i);
	}

}