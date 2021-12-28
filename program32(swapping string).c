#include<stdio.h>

void swap(char *p,char *q)
{
	char temp;
	temp=*p;
	*p=*q;
	*q=temp;
}



int main()
{
	char ch1,ch2;
	printf("enter first character\n");
	scanf("%c",&ch1);
	printf("enter second character\n");
	scanf(" %c",&ch2);
	printf("before swapping %c %c\n",ch1,ch2);
	swap(&ch1,&ch2);
	printf("after swapping characters are %c %c\n",ch1,ch2);
	return 0;
}