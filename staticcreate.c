#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd=0;
	fd=creat("marvellous.txt",0777);
	if(fd==-1)
	{
		printf("unable to create the file\n");
	}
	else
	{
		printf("file successfully created\n");
	}
	return 0;
}