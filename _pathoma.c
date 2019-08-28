#include "shellbacca.h"
#include <string.h>

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

        for (i = 0; i < n; i++)
        {
                if (s1[i] != s2[i])
                        return (1);
        }
        return (0);
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

char *_pathoma(char *buff)
{
        unsigned int i;
        int string_compare;
        char *first_path;
        char *second_path;
        char *search_token;
        char *full_path;
        int size;
	char *alternatepath;
        struct stat mystat;

        i= 0;
        while (environ[i] != NULL)
        {
                string_compare = _strncmp("PATH", environ[i], 4);
		if (string_compare == 0)
                {
			alternatepath = _strdup(environ[i]);
                        first_path = strtok(alternatepath, "=");
                        second_path = strtok(NULL, "=");
                        if (second_path == NULL)
                                return (NULL);
                        search_token = strtok(second_path, ":");
                        size = _strlen((buff) + _strlen(search_token) + 1);
                        full_path = malloc(sizeof(char) * size);
                        while (search_token = strtok(NULL, ":"))
                        {
                                full_path[0] = '\0';
                                _strcpy(full_path, search_token);
                                _strcat(full_path, "/");
                                _strcat(full_path, buff);
                                if (stat(full_path, &mystat) == 0)
                                        return (full_path);
                        }
                }
                i++;
        }
	return (buff);
}
