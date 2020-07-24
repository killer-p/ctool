#include "register.h"

/*
* 打印一行表格的边界线
* colunmn：列数 width：一列的宽度：字符为单位
*/
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

/*
* 显示8位寄存器
* data 数据
*/
void show_8_column(u32 data)
{
	int i;
	//画第一行 -------
	table_print_line(8,8);

	// bit 7 |bit 6 |
	for(i=7;i>-1;i--)
	{
		printf("| bit%d  ",i);
	}
	printf("|\r\n");

	//画第三行 -------
	table_print_line(8,8);

	//画第四行 | x  |
	for(i=7;i>-1;i--)
	{
		printf("|   %d   ",(data>>i)&0x0001);
	}
	printf("|\r\n");

	//画第五行 -------
	table_print_line(8,8);
}

/*
* 显示16位寄存器
* data 数据
*/
void show_16_column(u32 data)
{
	int i;
	table_print_line(16,8);
	for(i=15;i>9;i--)
	{
		printf("| bit%d ",i);
	}
	//因为二位数占两个符号，所以要给一位数增加一个空格
	for(i=9;i>-1;i--)
	{
		printf("| bit%d  ",i);
	}	
	printf("|\r\n");

	table_print_line(16,8);
	for(i=15;i>-1;i--)
	{
		printf("|   %d   ",(data>>i)&0x0001);
	}
	printf("|\r\n");

	table_print_line(16,8);
}

/*
* 显示32位寄存器
* data 数据
*/
void show_32_column(u32 data)
{
	int i,j;
	for(j=2;j>0;j--)
	{
		u8 cloumn=16*j-1;
		table_print_line(16,8);
		for(i=cloumn;i>cloumn-16;i--)
		{
			if(i<10){
				printf("| bit%d  ",i);
			}else {
				printf("| bit%d ",i);
			}
			
		}
		printf("|\r\n");
		table_print_line(16,8);
		for(i=cloumn;i>cloumn-16;i--)
		{

			printf("|   %d   ",(data>>i)&0x00000001);
		}
		printf("|\r\n");
		table_print_line(16,8);
		printf("\r\n");
	}

}

/*
* 设置寄存器的位数
* reg ：寄存器结构体指针
*/
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

/*
* 输入寄存器的值
*/
void register_get_hex(struct Register_t* reg)
{
	printf("input regitster data in hex:\r\n");
	scanf("%x",&(reg->data));
}

/*
* 显示寄存器表格
* reg_table ：表格结构体指针
*/
void register_show_table(struct Table_t* reg_table)
{
	int i=0;
	u8 column=reg_table->column;
	u32 data=reg_table->data;
	
	printf("\r\n");
	if(column==8)
	{
		show_8_column(data);
	}
	else if(column==16)
	{
		show_16_column(data);
	}
	else 
	{
		show_32_column(data);
	}

}

/*
* 16进制转寄存器模块
*/
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