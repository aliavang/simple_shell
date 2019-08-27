#include "shellbacca.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)), char **env)
{
	char *buff = NULL;
        size_t buff_size = 0;
        ssize_t chara;
	char **args;
	pid_t childPid;
	int status, i = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "MAY THE FORCE BE WITH YOU$ ", 27);
		chara = getline(&buff, &buff_size, stdin);
		if (chara == -1)
		{
			free(buff);
			return (EXIT_SUCCESS);
		}
		if (_strcmp(buff, "env\n") == 0)
			_env();
		if (_strcmp(buff, "exit\n") == 0)
			break;
		args = strtokenizer(buff, " \n");
		childPid = fork();
		if (childPid == 0)
		{
			execve(args[0], args, NULL);
			exit (1);
		}
		else
		{
			wait(&status);
		}
	}
	free(buff);
	return (EXIT_SUCCESS);
}
