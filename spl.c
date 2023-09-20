#include "shell.h"

/**
 * spl - function to devide aan array of string
 * @l: a command line
 * Return: an pointor to char pointer
*/

char **spl(char *l)
{
	char *tk = NULL, *garage = NULL;
	int j = 0, counter = 0;
	char **cmd = NULL;

	if (!l)
		return (NULL);
	garage = str_dp(l);
	tk = strtok(garage, " \t\n");
	if (tk == NULL)
	{
		free(garage), garage = NULL;
		free(l), l = NULL;
		return (NULL);
	}
	while (tk)
	{
		counter++;
		tk = strtok(NULL, " \t\n");
	}
	free(garage), garage = NULL;

	cmd = malloc(sizeof(char *) * (counter + 1));
	if (!cmd)
	{
		free(l), l = NULL;
		return (NULL);
	}
	tk = strtok(l, " \t\n");
	while (tk)
	{
		cmd[j] = str_dp(tk);
		tk = strtok(NULL, " \t\n");
		j++;
	}
	free(l);
	l = NULL, cmd[j] = NULL;
	return (cmd);
}
