#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - a function that capitalizes all words of a string.
 * @str: the string to capitalize
 *
 * Return: the capitalized string.
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
