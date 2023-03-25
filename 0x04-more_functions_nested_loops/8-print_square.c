#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: the size of the square
 *
 * Return: the character #
 */
void print_square(int size)
{
	int i, a;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (a = 0; a < size; a++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
