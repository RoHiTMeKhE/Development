
#include<stdio.h>

int addition (int); // declaration

int main()
{
	int ino = 0,iret = 0;
	 printf("accept no : \n");
	 scanf("%d",&ino);
	iret = addition(ino);
	printf(" addition is : %d\n",iret);
return 0; 
} 

int addition(int ivalue)
{
	int isum=0;
	int icnt =0;
	
	for(icnt=1;icnt<=ivalue;icnt++)
	{
		isum = isum + icnt;
	}
	
	return isum;
	
	
}

