#include "shell.h"

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *buff = NULL;
        size_t buff_size = 0;
        ssize_t chara;

        while (1)
        {
		write(STDOUT_FILENO, "MAY THE FORCE BE WITH YOU$ ", 28);
                chara = getline(&buff, &buff_size, stdin);
                if (chara == -1)
                {
                        free(buff);
                        return (EXIT_FAILURE);
                }
	}
	return (EXIT_SUCCESS);
}
