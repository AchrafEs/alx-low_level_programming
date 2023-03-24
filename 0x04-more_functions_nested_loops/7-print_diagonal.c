#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: char \.
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (a = 0; a < i; a++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
