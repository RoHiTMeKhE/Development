#include<stdio.h>
#include<stdlib.h>
int addition(int brr[],int isize)
{
	int icnt=0;
	int isum=0,i =0;
	for(i=0;i<isize;i++)
{
	isum=isum+brr[i];
}
return isum;
}

int main()
{
int * arr=NULL;
int iret=0;
int i=0,ilength=0;

printf("enter numbers of elements\n");
scanf("%d",&ilength);

arr=(int*)malloc(sizeof(int)*ilength);

printf("enter numbers");
for(i=0;i<ilength;i++)
{
	scanf("%d",&arr[i]);
}
iret=addition(arr,ilength);
printf("addition is   : %d \n",iret);

free(arr);
return 0;
}
