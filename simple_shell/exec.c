#include <stdio.h>
#include <unistd.h>
#include "shell.h"

/**
 * exe - exec 
 * Return: 0
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "/usr/", NULL};
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return(0);
}
