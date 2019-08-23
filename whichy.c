#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
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
        printf("hi\n");
        printf("dest: %s\n", dest);
        printf("src: %s\n", src);
        for (i = 0; dest[i] != '\0'; i++)
                ;
        for (j = 0; src[j] != '\0'; j++, i++)
        {
                dest[i] = src[j];
        }
        dest[i] = '\0';
        printf("STRCAT RETURNING\n");
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
            printf("Need more args\n");
            return (EXIT_FAILURE);
        }
        while (emc[i] != NULL)
        {
                search_path = strtok(emc[i], "=");
                printf("SP:[%s]\n", search_path);
                number = _strlen(search_path);
                /*printf("%i\n", number);*/
                if (number == 4)
                {       
                        string_compare = _strncmp("PATH", search_path, 4);
                        printf("search_path = %s\n", search_path);
                        printf("%d\n", string_compare);
                        if (string_compare == number) {
                                puts("Mallocing...");
                                printf("%s\n", av[1]);
                                printf("Post print:[%d]\n", ac);
                                fullpath = malloc(sizeof(char) * 100);
                                puts("Malloc'd!");
                                while (search_token = strtok(NULL, ":"))
                                {
                                        printf("FOR\n");
                                        printf("to see string token. %s\n", search_token);
                                        printf("see where i'm at\n");
                                        fullpath[0] = '\0';
                                        printf("PRE STRCPY\n");
                                        _strcpy(fullpath, search_token);
                                        printf("POST 1\n");
                                        _strcat(fullpath, "/");
                                        printf("POST 2\n");
                                        _strcat(fullpath, av[1]);
					
			
                                        printf("PATH:[%s]\n", fullpath);
					printf("stat:[%i]\n", stat(fullpath, &mystat));
					if (stat(fullpath, &mystat) == 0)
					{
						printf("found: %s\n", fullpath);
						exit (0);
					}
                                }
                        }
                }
                i++;
        }
        return (0);
}
