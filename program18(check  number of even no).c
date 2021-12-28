#include<stdio.h>

int counteven(int);

int main()
{
    int iValue= 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = counteven(iValue);
    printf("Number is : %d\n",iRet);
    
    return 0;
}
int counteven(int iNo)
{
    int iCnt = 0;
  int idigit=0;
  if(iNo==0)
  {
	  return 1;
  }
    if(iNo < 0)     // Input updator
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
		idigit=iNo % 10;
		if((idigit%2)==0)
		{
			iCnt++;
		}
      
        iNo = iNo / 10;
    }
    return iCnt;
}
