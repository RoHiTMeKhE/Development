#include<stdio.h>
#include<stdlib.h>

float average(int arr[],int isize)
{
	int isum=0;
	int i=0;
	float fresult=0.0f;
	
	for(i=0;i<isize;i++)
	{
		isum=isum+arr[i];
	}
	fresult=(float)isum/(float)isize; // explicit typecasting
	return fresult;
}	
int main()
{
int * ptr=NULL;
float fret=0.0f;
int i=0,ilength=0;

printf("enter numbers of elements\n");
scanf("%d",&ilength);

ptr=(int*)malloc(sizeof(int)*ilength);

printf("enter numbers");
for(i=0;i<ilength;i++)
{
	scanf("%d",&ptr[i]);
}


fret=average(ptr,ilength);
printf("average is:%f\n",fret);
free(ptr);
return 0;
}
