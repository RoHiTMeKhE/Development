#include<stdio.h>
#include<stdbool.h>

int isumfactors(int);
bool checkperfect(int);
int main()
{
int ivalue=0;
bool bret=false;
printf("enter number\n");
scanf("%d%",&ivalue);
bret=checkperfect(ivalue);
if(bret==true)
{
	printf("number is perfect number\n");
}
else
{
	printf("number is not perfect number\n");
}
return 0;
}

bool checkperfect(int ino)
{
	int iret=0;
	if(ino<0)
	{
		ino = -ino;
	}
	iret = isumfactors(ino);
	if(iret==ino)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int isumfactors(int ino)
{
	int isum =0,icnt=0;
	if(ino<0)
	{
		ino = -ino;
	}
	for(icnt=1;icnt<=(ino/2);icnt++)
	{
		if((ino%icnt)==0)
		{
			isum=isum+icnt;
		}
	}
	return isum;
}