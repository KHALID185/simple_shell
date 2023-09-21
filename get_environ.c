#include "shell.h"

/**
 * get_environ - git enverion then variable of env
 * @ink: une variable inkonnu
 * Return:the value of the ink
*/

char *get_environ(char *ink)
{
	char *garage, *ink2;
	char *content, *ev;
	int j;

	for (j = 0; environ[j]; j++)
	{
		garage = str_dp(environ[j]);
		ink2 = strtok(garage, "=");
		if (str_cmp(ink2, ink) == 0)
		{
			content = strtok(NULL, "\n");
			ev = str_dp(content);
			free(garage);
			return (ev);
		}
		free(garage);
		garage = NULL;
	}
	return (NULL);
}

