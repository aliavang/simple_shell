#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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
	printf("hi\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
        for (i = 0; dest[i] != '\0'; i++)
		;
        for (j = 0; src[j] != '\0'; j++, i++)
        {
                dest[i] = src[j];
		printf("%c\n", dest[i]);
		printf("%c\n", src[i]);
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
	char *con_cat_sec_half;
	char *copy_string;

	i= 0;
	while (emc[i] != NULL)
	{
		search_path = strtok(emc[i], "=");
		number = _strlen(search_path);
		/*printf("%i\n", number);*/
		if (number == 4)
		{	
			string_compare = _strncmp("PATH", search_path, 4);
			printf("search_path = %s\n", search_path);
			printf("%d\n", string_compare);
			if (string_compare == number)
			{
				puts("Mallocing...");
				printf("%s\n", av[1]);
				con_cat_sec_half = malloc(sizeof(char) * _strlen(av[1]) + 2);
				puts("Malloc'd!");
				puts("Copying...");
				_strcpy(con_cat_sec_half, "/");
				_strcpy(con_cat_sec_half + 1, av[1]);
				puts("Copied...");
				printf("%s\n", con_cat_sec_half);
				for (;search_token != NULL;)
				{
					search_token = strtok(NULL, ":");
					printf("to see string token. %s\n", search_token);
					printf("see where i'm at\n");
					_strcat(search_token, con_cat_sec_half);
					printf("%s\n", con_cat_sec_half);
				}
			}
		}
		i++;
	}
	return (0);
}

