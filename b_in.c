#include "shell.h"

/**
 * b_in - built in
 * @cmd: la commande
 * Return: integer
*/

int b_in(char *cmd)
{
	char *b[] = {"exit", "env"};
	int j;

	for (j = 0; j < 2; j++)
	{
		if (str_cmp(cmd, b[j]) == 0)
			return (1);
	}
	return (0);
}

/**
 * h_b - handling built in
 * @cd: la command
 * @av: argument vecteur
 * @st: status
 * @n_dx: index
 * Return: empty
*/

void h_b(char **cd, char **av, int *st, int n_dx)
{
	(void) av;
	(void) n_dx;

	if (str_cmp(cd[0], "exit") == 0)
		out_s(cd, st);
	else if (str_cmp(cd[0], "env") == 0)
		p_environ(cd, st);
}
