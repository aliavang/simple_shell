#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	int i;

	printf("Before execve\n");
	i = execve(argv[0], argv, NULL);
	i = -1;
	printf("%d\n", i);
	if (i == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
