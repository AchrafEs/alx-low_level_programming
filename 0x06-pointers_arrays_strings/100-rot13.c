#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @str: the string
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	char *p = str;

	while (*p)
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			*p += 13;
		}
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (str);
}
