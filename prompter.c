#include "shellbacca.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)), char **env)
{
	char *buff = NULL;
        size_t buff_size = 0;
        ssize_t chara;
	char **args;
	pid_t childPid;
	char *full_path;
	int status, i = 1;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "MAY THE FORCE BE WITH YOU$ ", 27);
		chara = getline(&buff, &buff_size, stdin);
		while (*buff == ' ')
		{	i++;
			buff++;
		}
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
		full_path = _pathoma(buff);
			buff = NULL;
		childPid = fork();
		if (childPid == 0)
		{
			execve(full_path, args, NULL);
			exit (1);
		}
		else
		{
			wait(&status);
		}
	}
	while(i > 0)
	{	i--;
		buff--;
	}
	return (EXIT_SUCCESS);
}
