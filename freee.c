#include "shell.h"

/**
 * freee - free
 * @fred: double pointer
 * Return: empty
*/


void freee(char **fred)
{
	int j;

	for (j = 0; fred[j]; j++)
	{
		free(fred[j]);
		fred[j] = NULL;
	}
	free(fred);
	fred = NULL;
}
