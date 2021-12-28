#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0,iret=0;
	char Fname[30];
	char data[7];
	printf("enter file name\n");
	scanf("%s",Fname);

	
	fd = open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1; //return to os
	}
	else
	{
		printf("file successfully opened with FD :%d\n",fd);
	}
	
	iret=read(fd,data,6);
	
	
	write(1,data,iret);
	return 0; 
}