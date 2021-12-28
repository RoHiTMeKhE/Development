#include<stdio.h>


int main()
{
int arr[5];
int isum=0;
int i=0;

printf("enter numbers\n");
/* scanf("%d",&arr[0]);
scanf("%d",&arr[1]);
scanf("%d",&arr[2]);
scanf("%d",&arr[3]);
scanf("%d",&arr[4]);  */

for(i=0;i<5;i++)
{
	scanf("%d",&arr[i]);
}
/*
isum= arr[0]+arr[1]+arr[2]+arr[3]+arr[4]; */

for(i=0;i<5;i++)
{
	isum=isum+arr[i];
}

printf("addition is   : %d \n",isum);
return 0;
}
