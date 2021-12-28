#include<stdio.h>
#include<stdbool.h>

bool checkeven(int);

int main()
{
	int ino = 0;
	bool bret = false;
	 printf("enter no : \n");
	 scanf("%d",&ino);
	bret = checkeven(ino);
	if(bret==true)
	{
	printf("  %d number is even\n",ino);
	}
	else
	{
		printf("  %d number is odd\n",ino);
	}
return 0; 
} 

bool checkeven(int ivalue)
{
	
	if((ivalue%2)==0)
{
return true;
}
else
{
return false;
}	
}