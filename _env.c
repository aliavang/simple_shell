#include "shellbacca.h"

void _env(void)
{
        int i;
	char **env = environ;

        for (i = 0; env[i] != NULL; i++)
        {
                write(STDOUT_FILENO, env[i], strlen(env[i]));
                _putchar('\n');
        }
}