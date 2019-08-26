#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

int _strncmp(char *s1, char *s2, int n)
{
	int i;
	int counter = 0;

	for (i = 0; i < n; i++)
	{
		if (s1[i] == s2[i])
			counter += 1;
	}
	return (counter);
}

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
