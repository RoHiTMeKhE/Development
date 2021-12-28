#include<stdio.h>


int main()
{
	int ivalue =0;
	printf("enter number\n");
	scanf("%d",&ivalue);
	
	printf("its hexadeciamal format : %x\n",ivalue);
	printf("its octal format : %o\n",ivalue);
	printf("its decimal format : %d\n",ivalue);
	return 0;
}