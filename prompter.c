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
	char **args = NULL;
	char *full_path = NULL;
	int i = 1;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			write(STDOUT_FILENO, "MAY THE FORCE BE WITH YOU$ ", 28);
		}
		chara = getline(&buff, &buff_size, stdin);
		while (*buff == ' ')
		{	i++;
			buff++;
		}
		if (chara == EOF)
		{
			if (isatty(STDIN_FILENO) == 1)
				_putchar('\n');
			free(buff);
			return (EXIT_SUCCESS);
		}
		if (_strcmp(buff, "env\n") == 0)
		{
			_env();
			continue;
		}
		if (_strcmp(buff, "exit\n") == 0)
			break;
		args = strtokenizer(buff, " \n");
		full_path = _pathoma(buff);
		_fork(full_path, args);
		free(args);
		free(full_path);
	}
	buff = buff - i;
	free(buff);
	return (EXIT_SUCCESS);
}
