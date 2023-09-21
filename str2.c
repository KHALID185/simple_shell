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
