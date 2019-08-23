#include "shell.h"

int main(void)
{
	pid_t la_child;
	int status;
	char *argv[2];
	int i;
	char *buff = NULL;
	size_t buff_size = 0;
	ssize_t cha_rac_ter;
	char *str;

	buff = malloc(sizeof(char) * buff_size);
	if (buff == NULL)
	{
		free (buff);
		return (-1);
	}
	while (1)
	{

		write(STDOUT_FILENO, "$ ", 2);
		cha_rac_ter = getline(&buff, &buff_size, stdin);
		if (cha_rac_ter == -1)
		{
			free(buff);
			return (-1);
		}
		str = strtok(buff, " \n");
		argv[0] = str;
		argv[1] = NULL;
		write(STDOUT_FILENO, str\n, strlen(str));
		la_child = fork();
		if (la_child == -1)
		{
			perror("Error:");
		}
		if (la_child == 0)
		{
			if(execve(argv[0], argv, NULL) == -1)
				perror("Can't execute command");
		}
		else

			wait(&status);

	}
	return (0);
}
