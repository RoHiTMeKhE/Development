#include<stdio.h>

void display();//function declaration

int main()//entry point function
{
	display();//function call
	return 0;
}
	
	
	// function defination
void display()
{
	//local variables
int ino=7521;
int idigit=0;

/*  idigit = ino % 10; //1
printf("%d\n",idigit);//1
ino = ino/10;//752

idigit = ino % 10;//2
printf("%d\n",idigit);//2
ino = ino/10;//75

idigit = ino % 10;//5
printf("%d\n",idigit);//5
ino = ino/10;//7

idigit = ino % 10;//7
printf("%d\n",idigit);//7
ino = ino/10;//0  */

while(ino != 0)
{
	idigit = ino % 10;
printf("%d\n",idigit);
ino = ino/10;
}
}