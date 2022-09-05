#include <stdio.h>

int main(void)
{
	
	char *buffer = NULL;
	size_t a;
	size_t n = 0;


	printf("$ ");
	a = getline(&buffer, &n, stdin);
	printf("%ld\n", a);
	printf(" >>>>>>>>>>>>>>>>>>> %s\n", buffer);
	return (0);
}
