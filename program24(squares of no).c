#include<stdio.h>

int power(int,int);

int main()
{
	int ivalue1=0;
	int ivalue2=0;
	int iret=0;
	printf("enter 1\n");
	scanf("%d%",&ivalue1);
	printf("enter 2\n");
	scanf("%d%",&ivalue2);
	iret = power(ivalue1,ivalue2);
	printf("output : %d\n",iret);
	return 0;
}

int power(int ino1,int ino2)
{   
  
	int icnt=0; 
    int isum=1;
  
	for(icnt=1;icnt < ino2;icnt++)
    {
	isum = isum*ino1;	
	}
	return isum;
}