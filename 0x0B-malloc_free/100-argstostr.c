#include "main.h"
#include <string.h>

/**
 * argstostr - concatenate arguments
 * @ac: args count
 * @av: args array
 * Return: pointer to array | NULL (failed)
 */

char *argstostr(int ac, char **av)
{
	char *txt;
	int i, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		len += strlen(av[i]) + 1;

	txt = (char *) malloc(sizeof(char) * len);
	if (txt == NULL)
		return (NULL);

	for (i = 1, len = 0; i < ac; i++)
	{
		strcat(txt, av[i]);
		strcat(txt, "\n");
	}
	return (txt);
}
