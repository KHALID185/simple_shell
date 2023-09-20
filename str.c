#include "shell.h"

/**
 * str_dp - duplicates a string
 * @str: a string
 * Return: a ponter
*/

char *str_dp(const char *str)
{
	int j, lgt = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		lgt++;
		str++;
	}
	str = str - lgt;
	ptr = malloc(sizeof(char) * (lgt + 1));
	if (!ptr)
		return (NULL);
	for (j = 0; j <= lgt; j++)
		ptr[j] = str[j];
	return (ptr);
}

