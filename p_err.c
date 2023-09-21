#include "shell.h"

/**
 * p_err - print the error
 * @n: name
 * @cd: command
 * @i: index
 * Return: empty void
*/
void p_err(char *n, char *cd, int i)
{
	char *dx;
	char nf[] = ": not found\n";

	dx = fint(i);

write(STDERR_FILENO, n, str_lgt(n));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, dx, str_lgt(dx));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cd, str_lgt(cd));
write(STDERR_FILENO, nf, str_lgt(nf));
free(dx);
}

/**
 * fint - integer to arry
 * @in: integer
 * Return: pointer char
*/

char *fint(int in)
{
	char buff[15];
	int k = 0;

	if (in == 0)
		buff[k++] = '0';
	else
	{
		while (in > 0)
		{
			buff[k++] = (in % 10) + '0';
			in /= 10;
		}
	}
	buff[k] = '\0';
	str_rev(buff, k);
	return (str_dp(buff));
}
