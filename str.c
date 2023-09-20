#include "shell.h"

/**
 * str_dp - duplicates a string
 * @str: a string
 * Return: a ponter
*/

char *str_dp(const char *str)
{
	int lgt = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*str++)
	{
		lgt++;
	}
	ptr = malloc(sizeof(char) * (lgt + 1));
	if (!ptr)
		return (NULL);
	for (lgt++; lgt--;)
		ptr[lgt] = *--str;
	return (ptr);
}

