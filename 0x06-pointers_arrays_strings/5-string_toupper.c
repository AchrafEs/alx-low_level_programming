#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @str: the string to make uppercase
 *
 * Return: char.
 */
char *string_toupper(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
