#include "shellbacca.h"
/**
 * _fork - Create child and execute commands
 *
 * Return: Void
 */
int _fork(char *path, char **args)
{
	pid_t childPid;
	int status;

	childPid = fork();
	if (childPid == -1)
	{
		perror("Error:");
		return (EXIT_FAILURE);
	}
	else if (childPid == 0)
	{
		execve(path, args, NULL);
		exit(1);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
