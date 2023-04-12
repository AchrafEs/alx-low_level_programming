#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - A function that concatenates
 * all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: a pointer to a new string (success).
 * (fail) NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
		len += strlen(av[i]) + 1;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0' ; j++)
		{
			str[k] = av[i][j];
		}
	}
	str[k] = '\0';
	return (str);
}
