#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A function that prints half of a string.
 * @str: the string to be checked
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half_len = len / 2;
	int i;

	if (len % 2 == 0)
	{
		for (i = half_len; i < len; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		len = (strlen(str) - 1) / 2;
		for (i = half_len; i < len; i++)
		{
		printf("%c", str[i]);
		}
	}
	putchar('\n');
}
