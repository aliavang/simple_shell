#include "shellbacca.h"
/**
 * tokcount - Count the number of words
 * @s: String to be evaluated
 * @delim: String with delimiter
 *
 * Return: Count of words including NULL terminator
 */
int tokcount(char *s, const char *delim)
{
	char *s_cpy, *token;
	int count;

	if (s == NULL || delim == NULL)
	{
		return (0);
	}
	s_cpy = _strdup(s);
	count = 0;
	token = strtok(s_cpy, delim);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, delim);
		printf("Word stored in token after passing NULL: %s\n", token);
	}
	count++;
	printf("Count: %d\n", count);
	free(s_cpy);
	return (count);
}

/**
 * strtokenizer - Turn string into tokens
 * @s: String to be evaluated
 * @delim: String with delimiter
 *
 * Return: Array of pointers to word
 */
char **strtokenizer(char *s, const char *delim)
{
	char *token;
	char **arr;
	int index, word_count;

	if (s == NULL || delim == NULL)
	{
		return (NULL);
	}
	word_count = tokcount(s, delim);
	arr = malloc(sizeof(char *) * word_count);
	if (arr == NULL)
	{
		return (NULL);
	}
	index = 0;
	token = strtok(s, delim);
	while (token != NULL)
	{
		arr[index] = token;
		token = strtok(NULL, delim);
		index++;
	}
	arr[index] = NULL;
	return (arr);
}

int main(void)
{
	char str[] = "/bin/ls -l";
	char **args;
	int i;

	args = strtokenizer(str, " \n");
	i = 0;
	while (args[i] != NULL)
	{
		printf("%s\n", args[i]);
		i++;
	}
	return (EXIT_SUCCESS);
}
