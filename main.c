#include "stdio.h"
#include "components/register.h"
#include "mydefine.h" 

void main(){
	int function=0;
	struct Register_t reg;
	struct Table_t reg_table;
	
	//欢迎语句
	printf("welecome!\r\n");
	printf("please select funcion from below!\r\n");
	printf("1,register tools; 2,进制转换 \r\n");

	scanf("%d",&function);

	//选择功能
	switch (function)
	{
	case 1:
		register_tools(&reg,&reg_table);
		break;
	case 2:
		break;
	}
	
}