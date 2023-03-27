#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - A function that reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
}
