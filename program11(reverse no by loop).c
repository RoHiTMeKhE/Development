#include<stdio.h>
// input : 3
// output : 321

// input : 7
// output : 7654321


void display(int ivalue)
{    
int i=0;
if(ivalue<0)
{
	ivalue = -ivalue;  //input updater
}

for(i=ivalue;i>=1;i--)
 {
 printf(" %d\n",i);
 }
}
int main()
{
	int ino = 0;
	 printf("accept no : \n");
	 scanf("%d",&ino);
	display(ino);
return 0; 
} 