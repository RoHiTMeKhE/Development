#include<stdio.h>
int addition(int brr[])
{
	int icnt=0;
	int isum=0,i =0;
	for(i=0;i<5;i++)
{
	isum=isum+brr[i];
}
return isum;
}

int main()
{
int arr[5];
int iret=0;
int i=0;

printf("enter numbers\n");
for(i=0;i<5;i++)
{
	scanf("%d",&arr[i]);
}
iret=addition(arr);
printf("addition is   : %d \n",iret);
return 0;
}
