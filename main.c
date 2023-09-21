#include "shell.h"

/**
 * main - a function that read line and excute command entry fct
 * @ac: argument counter
 * @av: argument vecteur
 * Return: 0 success
*/

int main(int ac, char **av)
{
	char **cmmd = NULL;
	char *l = NULL;
	int stts = 0, n_dx = 0;
	(void) ac;

	while (1)
	{
		l = rdl();
		if (l == NULL)
		{
			if (isatty(STDIN_FILENO) != 0)
				write(STDOUT_FILENO, "\n", 1);
			return (stts);
		}
		n_dx++;
		cmmd = spl(l);
		if (!cmmd)
			continue;

		if (b_in(cmmd[0]))
			h_b(cmmd, av, &stts, n_dx);
		else
			stts = exc(cmmd, av, n_dx);
	}
}
