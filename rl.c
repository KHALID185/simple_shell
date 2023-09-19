#include "shell.h"

/**
 * rdl - read a line and return the all command
 * Return: a pointer char (string)
*/

char *rdl(void)
{
	size_t l = 0;
	ssize_t m;
	char *ln = NULL;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	m = getline(&ln, &l, stdin);
	if (m == -1)
	{
		free(ln);
		ln = NULL;
		return (NULL);
	}
	return (ln);

}
