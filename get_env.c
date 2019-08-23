#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int arc, char **arv, char **env)
{
	char *left;
	char *right;
	int i;

	for (i = 0; env[i] != NULL; i++)
	{
		left = getenv("PATH");
		if (left != NULL) && strcmp(left, "=")
		/*right = strtok(left, "=");*/
		printf("Searching for path\n");
	}
	return (0);
}
