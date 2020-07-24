#include "stdio.h"
#include "components/register.h"
#include "mydefine.h" 

int main(){
	int function=0;
	struct Register reg;
	//欢迎语句
	printf("welecome!\r\n");
	printf("please select funcion from below!\r\n");
	printf("1,register tools; 2,进制转换 \r\n");

	scanf("%d",&function);

	//选择功能
	switch (function)
	{
	case 1:
		break;
	case 2:
		break;
	}
	return 1;
}