#include "stdio.h"
#include "components/register.h"
#include "mydefine.h" 

int main(){
	int function=0;
	struct Register reg;
	//��ӭ���
	printf("welecome!\r\n");
	printf("please select funcion from below!\r\n");
	printf("1,register tools; 2,����ת�� \r\n");

	scanf("%d",&function);

	//ѡ����
	switch (function)
	{
	case 1:
		break;
	case 2:
		break;
	}
	return 1;
}