#include "shell.h"

/**
 * str_rev - reverse a string
 * @s: a string
 * @l: length
 * Return: a reverse string
*/

void str_rev(char *s, int l)
{
	char garage;
	int fin = l - 1;
	int debut = 0;

	while (debut < fin)
	{
		garage = s[debut];
		s[debut] = s[fin];
		s[fin] = garage;
		debut++;
		fin--;
	}
}

/**
 * positive - test si le number est positif
 * @s: string
 * Return: integer
*/

int positive(char *s)
{
	int j;

	if (s == NULL)
		return (0);
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] > '9' || s[j] < '0')
			return (0);
	}
	return (1);
}

/**
 * intf - convert to integer
 * @s: a string
 * Return: int
*/

int intf(char *s)
{
	int j, valeur = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		valeur *= 10;
		valeur += (s[j] - '0');
	}
	return (valeur);
}
