#include<stdio.h>
#include<stdbool.h>

bool checkpalindrome(char *str)
{
	char *start=NULL;
	char *end=NULL;
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		if(*start!= *end)
		{
			break;
		}
		start++;
		end--;
	}
	if(start < end)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}
int main()
{
	char arr[30];
	bool iret=0;
	
	
	printf("enter string \n");
	scanf("%[^'\n']s",arr);
	
	iret= checkpalindrome(arr);
 
 if(iret==true)
 {
	 printf("no is palandrome \n");
 }
 else{
	 printf("no is not palandrome \n");
 }
 return 0;
 }

