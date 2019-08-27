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
/**
 * _strlen - entry point
 * @s: parameter for strings
 *
 * Description: returns the length of a string
 * Return: a value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strncmp - Comapres two strings up to a certain character
 * @s1: String one
 * @s2: String two
 * @n: number of characters need to be compared
 *
 * Return: the number of the characters counted
 */
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
/**
 * _strcat - Glue two strings together
 * @dest: String one
 * @src: String two
 *
 * Return: Pointer to dest
 */

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
