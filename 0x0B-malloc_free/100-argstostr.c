#include "main.h"
#include <stdlib.h>

/**
 * argstostr - convert all arguemwnts to a string
 * @ac: the integer input
 * @av: the 2D array
 *
 * Return: returns a pointer too a new string
 */
char *argstostr(int ac, char **av)
{
	int x, y, i = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			j++;
	}
	j += ac;
	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[i] = av[x][y];
			i++;
		}
		if (str[i] == '\0')
			str[i++] = '\n';
	}
	return (str);
}
