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
	int i = 0, exit_status = 0;

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
		if (chara == EOF)
		{
			if (isatty(STDIN_FILENO) == 1)
				_putchar('\n');
			return (EXIT_SUCCESS);
		}
		if (_strcmp(buff, "env\n") == 0)
		{
			_env();
			continue;
		}
		_bye(buff, exit_status);
		args = strtokenizer(buff, " \n");
		full_path = _pathoma(buff);
		exit_status = _fork(full_path, args);
	}
	buff = buff - i;
	return (exit_status);
}
