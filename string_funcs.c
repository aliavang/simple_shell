#include "shellbacca.h"
/**
 * _strcmp - Comapres two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: Difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

#include "shellbacca.h"
/**
 * _strdup - Duplicate a string to newly allocated space
 * @str: String to be duplicated
 *
 * Return: Pointer to newly allocated space
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int strlen = 0;
	char *a = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		strlen++;
	}
	a = malloc(sizeof(char) * (strlen + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';
	return (a);
}
