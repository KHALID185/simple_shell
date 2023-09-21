#include "shell.h"

/**
 * out_s - exit shell
 * @cmd: la commande
 * @lest: int
 * Return: empty
*/

void out_s(char **cmd, int *lest)
{
	freee(cmd);
	exit(*lest);
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
