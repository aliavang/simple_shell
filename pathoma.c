#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main (int ac, char **av, char **env)
{
	unsigned int i, j;
	char *str_toke;
	int size;
	char **str_tokey;

	
	while (env[i] != NULL)
	{
		printf("before while loop");
		str_toke = strtok(env[i], "=");
	}
	for (j = 0; str_toke != NULL; j++)
		{
			printf("before for loop");
			if (str_tokey[j] == "PATH")
			{
				/*str_tokey[i] = str_toke;
				str_toke = strtok(NULL, "=");*/
				printf("See within the loop\n");
			}
		}
		i++;
	}
	return (0);
}

