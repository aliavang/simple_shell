#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
        char *buff = NULL;
        size_t buff_size = 0;
        ssize_t chara;

        while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);
        	chara = getline(&buff, &buff_size, stdin);
        	if (chara == -1)
        	{
                	free(buff);
                	return (-1);
        	}
        	write(STDOUT_FILENO, buff, buff_size);
	}
		free(buff);
        	return (0);
}
