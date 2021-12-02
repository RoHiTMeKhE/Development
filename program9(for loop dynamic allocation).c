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
 for(i=1;i<=ivalue;i++)
 {
  printf(" marvellous\n");
 }
}