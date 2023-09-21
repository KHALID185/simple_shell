#include "shell.h"

/**
 * exc - excute the shell
 * @cmmmd: the command array
 * @av: double pointer
 * @n_idx: index
 * Return: integer
*/

int exc(char **cmmmd, char **av, int n_idx)
{
	int sts;
	int j;
	pid_t enfant;
	char *cmmd;

	cmmd = path_cmd(cmmmd[0]);
	if (cmmd == NULL)
	{
		p_err(av[0], cmmmd[0], n_idx);
		freee(cmmmd);
		return (127);
	}
	enfant = fork();

	if (enfant == 0)
	{
		if (execve(cmmd, cmmmd, environ) == -1)
		{
			free(cmmd), cmmd = NULL;
			for (j = 0; cmmmd[j]; j++)
			{
				free(cmmmd[j]);
				cmmmd[j] = NULL;
			}
			free(cmmmd), cmmmd = NULL;
		}
	}
	else
	{
		waitpid(enfant, &sts, 0);
		freee(cmmmd);
		free(cmmd), cmmd = NULL;
	}
	return (WEXITSTATUS(sts));

}
