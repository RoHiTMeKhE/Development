#include<stdio.h>
#include<stdbool.h>

int reverse(int);
bool checkreverseno(int);

int main()
{
int ivalue=0;
bool iret=false;
printf("enter no: \n");
scanf("%d",&ivalue);
iret=checkreverseno(ivalue);
 
 if(iret==true)
 {
	 printf("no is palandrome \n");
 }
 else{
	 printf("no is not palandrome \n");
 }
 return 0;
 }

int reverse(int ino)
{
	int isum=0,icnt=0;
	
	while(ino!=0)
	{
		icnt=ino%10;
		isum=(isum*10)+icnt;
		ino=ino/10;
	}
	return isum;
}
/* while(iNo != 0)           /////////also this methos to avoid checkreverseno
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    } */                         //////////////////////
bool checkreverseno(int ino)
{
	int input=0;
	input = reverse(ino);
	if(ino==input)
	{
		return true;
	}
	else
	{
		return false;
	}
} 
