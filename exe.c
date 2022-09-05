#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - exercise:fork + wait + execve
 *
 * Return:Always 0
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid = 1;
	int i = 0;
	int status;
	char *argv[] = {"/bin/cd", "/tmp", NULL};

	my_pid = getpid();
	while (i <= 6 && (child_pid != 0))
	{
		child_pid = fork();
			if(child_pid == -1)
		{
			printf("error");
			return(1);
		}
		wait(&status);
		i++;
	}
			if(child_pid == 0)
			{
				printf("-------------\n\n");
				printf("ID CHILD: %u\n\nID Father:%u\n\n",getpid(), my_pid);
				printf("-------------\n\n");
			}
			else
			{
				printf("I AM THE FATHER AND MY ID: %u\n",my_pid);
				printf("---------------\n");
			
			if(execve(argv[0],argv,NULL) == -1)
					perror("ERROR.");
			}
			return(0);
}
