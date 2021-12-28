#include<stdio.h>

unsigned long int factorial(int); // declaration

int main()
{
	int ino = 0;
	unsigned long int iret = 0;
	 printf("accept no : \n");
	 scanf("%d",&ino);
	iret = factorial(ino);
	printf(" factorial is : %ld\n",iret);
return 0; 
} 

unsigned long int factorial(int ivalue)
{
	unsigned long int ifact=1;
	int icnt =0;
	if(ivalue<0)
{
	ivalue = -ivalue;  //input updater
}
	icnt = 1;
	while(icnt <= ivalue)
	{
		ifact=ifact*icnt;
		icnt++;
	}
	return ifact;
	
	
}