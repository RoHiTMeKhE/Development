#include<stdio.h>

int sumeven(int);

int main()
{
    int iValue= 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = sumeven(iValue);
    printf("Number is : %d\n",iRet);
    
    return 0;
}
int sumeven(int iNo)
{
    
  int idigit=0; 
  int isum = 0;
 
    if(iNo < 0)     // Input updator
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
		idigit=iNo % 10;
		if((idigit%2)==0)
		{
			 isum = isum + idigit;
		}
       
        iNo = iNo / 10;
    }
    return isum;
}
