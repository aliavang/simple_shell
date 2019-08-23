#include <stdlib.h>
#include <stdio.h>

void setstringtoh(char *s, unsigned int size)
{
	int i;
	int j;

	/*if (s == NULL)
		return;
	if (s == "")
		return;
	if (size < 0)
		return;*/
	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		if (s[i] == 'H')
		{
			for (j = 0; j < size; j++)
				putchar('H');
		}
}
