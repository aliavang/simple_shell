#include "shellbacca.h"
/**
 * _pathoma - Find the path of an arguement
 * @buff: Argument
 *
 * Return: Path to arguement
 */
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
