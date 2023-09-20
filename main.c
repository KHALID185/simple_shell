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
	int stts = 0;
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
		cmmd = spl(l);
		if (!cmmd)
			continue;

		stts = exc(cmmd, av);
	}
}
