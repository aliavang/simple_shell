#include "shellbacca.h"

/**
 * _env - entry point
 * Description: print the environment
 *
 */
void _env(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		_putchar('\n');
	}
}
