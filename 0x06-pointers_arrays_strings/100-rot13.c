#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @str: the string
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
		}
		else
		{
			str[i] -= 13;
		}
	}
	return (str);
}
