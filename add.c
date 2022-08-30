#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 2;
	int b = 3;
	int sum = a + b;
	pid_t pid;
	
	pid = getpid();

	printf("The sum:%d\n", sum);
	printf("pid :%d\n", pid);

	return(0);
}
