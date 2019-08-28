#include "shellbacca.h"
/**
 * main - Entry point for shell
 * @ac: Argument count
 * @av: Argument stirngs
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on fail
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *buff = NULL;
	size_t buff_size = 0;
	ssize_t chara;
	char **args;
	char *full_path;
	int i = 1;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			write(STDOUT_FILENO, "MAY THE FORCE BE WITH YOU$ ", 27);
		}
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
		_fork(full_path, args);
	}
	buff = buff - i;
	return (EXIT_SUCCESS);
}
