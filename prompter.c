#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int ac, int av)
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
                        return (-1);
                }
	}
}
