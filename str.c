#include "shell.h"

/**
 * str_l - length of a string
 * @str: a string
 * Return: integer length
*/

int str_l(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * str_ct - cat a string
 * @str1: string to colle
 * @str2: string to cat
 * Return: a string
*/

char *str_ct(char *str1, char *str2)
{
	char *ptr = str1;

	while (*ptr != '\0')
		ptr++;

	while (*str2 != '\0')
	{
		*ptr = *str2;
		ptr++;
		str2++;
	}
	*ptr = *str2;
	return (str1);
}

/**
 * str_cp - copy string
 * @str1: string 1
 * @str2: string 2
 * Return: a string char
*/

char *str_cp(char *str1, char *str2)
{
	int j = 0;

	if (str1 == str2 || str2 == 0)
		return (str1);

	while (str2[j] != '\0')
	{
		str1[j] = str2[j];
		j++;
	}
	str1[j] = 0;
	return (str1);

}

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

/**
 * str_cmp - comparison of two strings
 * @str1: the first one
 * @str2: the second one
 * Return: integer
*/

int str_cmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}

