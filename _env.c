#include "shellbacca.h"

/**
 * _env - entry point
 * Description: print the environment
 *
 */
void _env(void)
{
	int i;
	char **env = environ;

	for (i = 0; env[i] != NULL; i++)
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		_putchar('\n');
	}
}
