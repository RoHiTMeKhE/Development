#include<stdio.h>
void displaytable(int);
int main()
{
	int ivalue=0;
	printf("enter to display its table\n");
	scanf("%d%",&ivalue);
	
	displaytable(ivalue);
	return 0;
}

void displaytable(int ino)
{    
	int icnt=0; 

	if(ino < 0)
{
	ino = -ino;  //input updater
}
	for(icnt=1;icnt < 10;icnt++)
     
	{
		printf("%d",ino*icnt);
	}
	
}
/* /////alsu can write//
void displaytable(int ino)
{    
	int icnt=0; 
     int isum=0;
	if(ino < 0)
{
	ino = -ino;  //input updater
}
	for(icnt=1;icnt < 10;icnt++)
    {
	isum = ino*icnt;	
	printf("%d",isum);
	}
} */