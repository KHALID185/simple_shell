#include "shell.h"

/**
 * path_cmd - the path of the command to test
 * @cmd: la commande
 * Return: char pointer
*/

char *path_cmd(char *cmd)
{
	char *pth, *cmd2, *direct;
	struct stat sttt;
	int j;

	for (j = 0; cmd[j]; j++)
	{
		if (cmd[j] == '/')
		{
			if (stat(cmd, &sttt) == 0)
				return (str_dp(cmd));
			return (NULL);
		}
	}
	pth = get_environ("PATH");
	if (!pth)
		return (NULL);
	direct = strtok(pth, ":");
	while (direct)
	{
		cmd2 = malloc(str_lgt(direct) + str_lgt(cmd) + 1 + 1);
		if (cmd2)
		{
			str_cp(cmd2, direct);
			str_ct(cmd2, "/");
			str_ct(cmd2, cmd);
			if (stat(cmd2, &sttt) == 0)
			{
				free(pth);
				return (cmd2);
			}
			free(cmd2), cmd2 = NULL;
			direct = strtok(NULL, ":");
		}
	}
	free(pth);
	return (NULL);
}

