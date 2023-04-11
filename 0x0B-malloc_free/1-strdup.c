#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: the given string.
 *
 * Return: pointer str (success).
 */
char *_strdup(char *str)
{
	int i;
	char *str2;
	int len = strlen(str) + 1;
	
	if (str == NULL)
	{
		return (NULL);
	}
	str2 = malloc(len * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
