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

/**
 * str_cp - copie a string
 * @str1: the destination
 * @str2: the arraythat we will copie the countent of it
 * Return: a pointer to the array
*/

char *str_cp(char *str1, char *str2)
{
	int j = 0;

	if (str1 == str2 || str2 == 0)
		return (str1);
	while (str2[j])
	{
		str1[j] = str2[j];
		j++;
	}
	str1[j] = 0;
	return (str1);
}

/**
 * str_cmp - compare two string
 * @str1: string one
 * @str2: string two
 * Return: un integer value
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

/**
 * str_lgt - length of a string
 * @str: a string
 * Return: length
*/

int str_lgt(char *str)
{
	int j = 0;

	if (!str)
		return (0);
	while (*str++)
		j++;
	return (j);
}

/**
 * str_ct - councatinate two string
 * @str1: string 1
 * @str2: string 2
 * Return: the whole string
*/

char *str_ct(char *str1, char *str2)
{
	char *ptr = str1;

	while (*ptr)
		ptr++;
	while (*str2)
	{
		*ptr = *str2;
		ptr++;
		str2++;
	}
	*ptr = '\0';
	return (str1);
}
