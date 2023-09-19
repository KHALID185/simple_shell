#include "shell.h"

/**
 * exc - excute the shell
 * @cmmmd: the command array
 * @argv: double pointer
 * Return: integer
*/

int exc(char **cmmmd, char **argv)
{
	int sts;
	int j;
	pid_t enfant;

	enfant = fork();

	if (enfant == 0)
	{
		if (execve(cmmmd[0], cmmmd, environ) == -1)
		{
			perror(argv[0]);
			for (j = 0; cmmmd[j]; j++)
			{
				free(cmmmd[j]);
				cmmmd[j] = NULL;
			}
			free(cmmmd);
			cmmmd = NULL;
			exit(0);
		}
	}
	else
	{
		waitpid(enfant, &sts, 0);
		for (j = 0; cmmmd[j]; j++)
		{
			free(cmmmd[j]);
			cmmmd[j] = NULL;
		}
		free(cmmmd);
		cmmmd = NULL;
	}
	return (WEXITSTATUS(sts));

}
