#include "shellbacca.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *buff = NULL;
	size_t buff_size = 0;
	ssize_t chara;
	char **args;
	pid_t childPid;
	int status;

	while (1)
	{
		write(STDOUT_FILENO, "MAY THE FORCE BE WITH YOU$ ", 27);
		chara = getline(&buff, &buff_size, stdin);
		if (chara == -1)
		{
			free(buff);
			return (EXIT_SUCCESS);
		}
		args = strtokenizer(buff, " \n");
		childPid = fork();
		if (childPid == 0)
		{
			execve(args[0], args, NULL);
		}
		else
		{
			wait(&status);
		}
	}
	return (EXIT_SUCCESS);
}
