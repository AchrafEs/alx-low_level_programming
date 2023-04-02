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
	long int i = n;

	if (n < 0)
	{
		n *= -1;
		i = n;
		putchar('-');
	}
	i /= 10;
	if (i != 0)
	{
		print_number(i);
	}
	putchar(n % 10 + '0');
}
