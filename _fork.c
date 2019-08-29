#include "shellbacca.h"
/**
 * _fork - Create child and execute commands
 * @path: Absolute path
 * @args: Argument of tokens
 *
 * Return: EXIT_SUCCESS if successful and EXIT_FAILURE if fail
 */
int _fork(char *path, char **args)
{
	pid_t childPid;
	int status;
	int exit_status;

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
	if (WIFEXITED(status))
		exit_status = WEXITSTATUS(status);
	return (exit_status);
}
