#include<stdio.h>

int reverseno(int);

int main()
{
    int iValue = 0;
	int iret = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iret = reverseno(iValue);
    printf("Number is : %d\n",iret);
    
    return 0;
    
}
int reverseno(int iNo)
{
    
  int idigit=0; 
  int isum = 0;
 
    while(iNo != 0)
    {
		idigit=iNo % 10;
		
		isum=(isum*10)+idigit;
	
			 iNo = iNo/10;
	}
		return isum;
    }

