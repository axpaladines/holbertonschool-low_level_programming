#include "main.h"
#include <stdlib.h>

/**
* sumDim - return a length of a matriz
* @ac: count
* @av: vector
* Return: Always 0
*/

int sumDim(int ac, char **av)
{
	int i = 0, j = 0, sum = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sum++;
		sum++;
	}

	return (sum);
}

/**
* argstostr - concatenates all the arguments of a program
* @ac: count
* @av: vector
* Return: Always 0
*/

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, sum = 0, ia = 0;
	char *out;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
	}
	sum = sumDim(ac, av);
	out = malloc((sum + 1) * sizeof(char));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	for (i = 0; ia < sum; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			out[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < sum - 1)
			out[ia] = av[i][j];
	}
	out[ia] = '\0';
	return (out);
}
