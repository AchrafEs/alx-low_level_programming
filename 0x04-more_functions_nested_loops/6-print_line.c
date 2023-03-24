#include "main.h"
#include <stdio.h>

/**
 * print_line - on that draws a straight line in the terminal.
 * @n: the number of times the char _ should be printed
 *
 * Return: line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}

