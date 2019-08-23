#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t la_child, cur;
	int i;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	i=0;
	cur = getpid();
	printf("Before we enter the loop... Process id: %d\n\n", cur);
	while (i < 5)
	{
		la_child = fork();
		if (la_child == -1)
		{
			perror("Error:");
			return (1);
		}
		if (la_child == 0)
		{
			cur = getpid();
			printf("Wait for me, wait for me. Process id: %d\n", cur);
			execve(argv[0], argv, NULL);
			sleep(3);
		}
		else
		{
			wait(&status);
			printf("Oh, it's all better now\n");
		}
		i++;
	}


	return (0);
}
