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
	char *p_str;
	int index, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len = len + 1;
	p_str = malloc(sizeof(char) * len);
	if (p_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (str[index] != '\0')
	{
		p_str[index] = str[index];
		index++;
	}
	p_str[index] = '\0';
	return (p_str);
}
