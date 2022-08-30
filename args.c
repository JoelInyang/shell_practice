#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int counter;
	int n = ac;

	for(counter=0; counter<n; counter++)
		printf("av[%d]: %s\n", counter,av[counter]);

	return(0);
}
