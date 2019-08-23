/**
 * _strdup - main entry
 * @str: pointer to a string
 *
 *Description: return a pointer to a newly allocated space in memory
 * Return: pointer a
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int strlen = 0;
	char *a = NULL;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		strlen++;
	a = malloc(sizeof(char) * (strlen + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
		a[i] = '\0';
	return (a);
}
/**
 * _strcmp - entry point
 * @s1: pointer
 * @s2: pointer
 *
 * Description: compares two strings
 * Return: the difference or zero if no difference
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;
	int counter = 0;

	for (i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
			counter += 1;
	}	return (counter);
}
/**
 * *_strcpy - entry point
 * @src: pointer
 * @dest: pointer
 *
 * Description: copy the string using pointer
 * Return: dest
 */
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
/**
 * _strcat - entry point
 * @dest: pointer
 * @src: pointer
 *
 * Description: concatenates two strings
 * Return: the result of string dest
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
