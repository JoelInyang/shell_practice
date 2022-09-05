#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	char *buffer = NULL, *cpy_buffer = NULL;
	ssize_t num_read;
	size_t n = 0;
	char *delim = " ";
	char *token;
	int num_tokens = 0, i = 0;
	char **argv;


	
	printf("$ ");
	num_read = getline(&buffer, &n, stdin);
	printf(">>>>>>>>>> %s\n", buffer);
	//printf("%ld\n", num_read);
	
	//to copy into cpy_buffer, let allocate memory for that.
	cpy_buffer = malloc(sizeof(char)* num_read );

	//copy content of buffer to cpy_buffer
	strcpy(cpy_buffer, buffer);

	token = strtok(buffer, delim);
	
	while(token != NULL)
	{
	printf("%s\n", token);

	token = strtok(NULL, delim);
	}
	//get no of tokens to be created.	
	num_tokens++;

	argv = malloc(sizeof(char *)* num_tokens);
	
	//get the token and save them as argumentsin argv.
	token = strtok(cpy_buffer, delim);
	while(token != NULL)
	{
		//allocate space for each token
		//strlen(token);
	argv[i] = malloc(sizeof(char *)*strlen(token));
	strcpy(argv[i], token);
	// for debugging purposes
	 printf(">>>>>>>>>> %s\n", argv[i]);
	/********************************/
	 i++;
	token = strtok(NULL, delim);
	}

	argv[i] = NULL;
	
	return(0);
}
