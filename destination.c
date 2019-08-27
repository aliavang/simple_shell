#include "shellbacca.h"

int main(int ac, char **av, char **emc)
{
	unsigned int i;
	char *search_path;
	int number;
	int string_compare;
	char *search_token;
	char *fullpath;
	char *copy_string;
	struct stat mystat;

	i= 0;
	if (ac < 2)
	{
		return (EXIT_FAILURE);
	}
	while (emc[i] != NULL)
	{
		search_path = strtok(emc[i], "=");
		number = _strlen(search_path);
		if (number == 4)
		{       
			string_compare = _strncmp("PATH", search_path, 4);
			if (string_compare == number) {
				fullpath = malloc(sizeof(char) * 100);
				if (fullpath == NULL)
					return (NULL);
				while (search_token = strtok(NULL, ":"))
				{
					fullpath[0] = ;'\0';
					_strcpy(fullpath, search_token);
					_strcat(fullpath, "/");
					_strcat(fullpath, av[1]);
					if (stat(fullpath, &mystat) == 0)
						exit (0);
				}
			}
		}
		i++;
	}
	return (0);
}
