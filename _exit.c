#include "shellbacca.h"


void _bye(char *buff, int exit_status)
{
	int i = exit_status;

	if (_strcmp(buff, "exit\n") == 0)
		exit (i);
}

