#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 10;
	char *buf = malloc(sizeof(char) * n);


	printf("Enter command:");
	getline(&buf,&n,stdin);

	printf(" $ %s", buf);
	
	free(buf);
}
