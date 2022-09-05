#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include "shell.h"

int main(void)
{
	pid_t a;
	pid_t b;
	//int c;
	//int n = ac;

	a = getpid();
	b = getppid();

	printf("Before fork\n");
	a = fork();
	if(a == -1)
	{
		perror("ERROR");
		return(1);
	}

	printf(" pid: %d\n", a);
	printf(" ppid: %d\n", b);
	
	if(a == 0)
	{
		printf(" %u\n", b);
	}
	else
	{
		printf("(%d), %d I am the father now\n", a,b);

	}
	


	return(0);
}
