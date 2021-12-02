#include<stdio.h>

void display(); 

int main()
{
	int ino = 0;
	 printf("accept no : \n");
	 scanf("%d",&ino);
	display(ino);
return 0; 
} 

void display(int ivalue)
{    
int i=0;
if(ivalue<0)
{
	ivalue = -ivalue;  //input updater
}

 for(i=1;i<=ivalue;i++)
 {
  printf(" %d\n",i);
 }
}