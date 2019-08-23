#include <string.h>
#include <stdio.h>

char **main(void)
{
	char array[] = "what's up minhhuy";
	char *tok;
	char *to_list[20];
	char *tok1, *tok2;

	tok = strtok(array, " ");
	tok1 = strtok(NULL, " ");
	tok2 = strtok(NULL, " ");

	printf("%s\n", tok);
	printf("%s\n", tok1);
	printf("%s\n", tok2);
	to_list[0] = tok;
	to_list[1] = tok1;
	to_list[2] = tok2;
	printf("%s\n%s\n%s\n", to_list[0], to_list[1], to_list[2]);
	return (to_list);
}
