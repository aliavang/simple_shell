#include "shellbacca.h"
/**
 * _bye - main entry, exit the program
 * @buff: pointer to the arguments
 * @exit_status: a variable integer
 *
 * Return: 0 on success or 1 on failure
 */

void _bye(char *buff, int exit_status)
{
	int i = exit_status;

	if (_strcmp(buff, "exit\n") == 0)
		exit(i);
}

