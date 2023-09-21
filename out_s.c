#include "shell.h"

/**
 * out_s - exit shell
 * @cmd: la commande
 * @lest: int
 * @av: argument vecteur
 * @n_dex: integer
 * Return: empty
*/

void out_s(char **cmd, char **av, int *lest, int n_dex)
{
	char *idx, prt[] = ": exit: Illegal number: ";
	int v_out = (*lest);

	if (cmd[1])
	{
		if (positive(cmd[1]))
		{
			v_out = intf(cmd[1]);
		}
		else
		{
			idx = fint(n_dex);

			write(STDERR_FILENO, av[0], str_lgt(av[0]));
			write(STDERR_FILENO, ": ", 2);
			write(STDERR_FILENO, idx, str_lgt(idx));
			write(STDERR_FILENO, prt, str_lgt(prt));
			write(STDERR_FILENO, cmd[1], str_lgt(cmd[1]));
			write(STDERR_FILENO, "\n", 1);

			free(idx);
			freee(cmd);

			(*lest) = 2;

			return;
		}
	}
	freee(cmd);
	exit(v_out);
}

/**
 * p_environ - print environ
 * @cmd: la commande
 * @stt: status
 * Return: empty
*/

void p_environ(char **cmd, int *stt)
{
	int j;

	for (j = 0; environ[j]; j++)
	{
		write(STDOUT_FILENO, environ[j], str_lgt(environ[j]));
		write(STDOUT_FILENO, "\n", 1);
	}
	freee(cmd);
	(*stt) = 0;
}
