#include<stdio.h>

void DisplayFactors(int);

int main()
{
	
	int ino = 0;
	
	 printf("enter no : \n");
	 scanf("%d",&ino);   
	 
	 DisplayFactors(ino);  
	
return 0; 
} 

void DisplayFactors(int ivalue) 

{
    int icnt=0;
	if(ivalue < 0)
{
	ivalue = -ivalue;  //input updater
}
	for(icnt=1;icnt < ivalue;icnt++)
	{
		if((ivalue % icnt)==0)
		{
		printf("%d\n",icnt);
		}
	}
}