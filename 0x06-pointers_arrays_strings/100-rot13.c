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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (char) ((str[i] - 'a' + 13) % 26 + 'a');
		}
	}
	return (str);
}
