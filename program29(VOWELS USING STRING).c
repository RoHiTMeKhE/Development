#include<stdio.h>

int count(char *str)
{
	int icnt=0;
	if(str == NULL)
	{
		return -1;
	}
	while(*str !='\0')
    {
	  if((*str =='a')||(*str =='e')||(*str =='i')||(*str =='o')||(*str =='u')||(*str =='A')||(*str =='E')||(*str =='I')||(*str =='O')||(*str =='U'))
	{
		icnt++;
	}
	str++;
	}
	return icnt;
}

int main()
{
	char arr[30];
	int iret=0;
	
	
	printf("enter string \n");
	scanf("%[^'\n']s",arr);
	
	iret= count(arr);
	printf("numbers of vowels are : %d\n",iret);
	    	
	return  0;
}