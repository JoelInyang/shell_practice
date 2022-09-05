#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "JOEL ENIEBIET INYANG.";
	char *delim = " ";
	char *token;
	
	token = strtok(str, delim);
	
	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return(0);
}
