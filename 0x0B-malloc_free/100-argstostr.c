#include "main.h"
#include <stdlib.h>

/**
*argstostr - concatenate all argument of the program
*@ac: argument count
*@av: pointer to array of size ac
*Return: NULL, if ac = 0, av = null, pointer new string
*NULL on fail
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	size = size + ac + 1;
	arg = malloc(sizeof(char) * size);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\n';
	return (arg);
}
