#include <stdio.h>
#include <error.h>
#include <unistd.h>
#include "shell.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buffer = NULL;
	size_t a;
	size_t n = 0;
	char *str;
	char *delim = " ";

	
	printf("$ ");
	a = getline(&buffer, &n, stdin);
	printf("%ld\n", a);

	if(*buffer != EOF || *buffer != *.)
	{
		printf(">>>>>>>>>>>>> %s\n", buffer);
		while(buffer = *.)
		{
	}
	else
		exit;
	
	str = strtok(buffer, delim);
	while (str != NULL)
	{
		printf("%s\n", str);
		str = strtok(NULL, delim);
	}



	exit(EXIT_SUCCESS);
}
