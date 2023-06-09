#include "main.h"
#include <stdio.h>

/**
 * print_number - A function that prints an integer.
 * @n: the integer to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
