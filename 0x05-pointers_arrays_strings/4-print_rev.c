#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - A function that prints a string
 * in reverse, followed by a new line.
 * @s: the char to be checked
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
