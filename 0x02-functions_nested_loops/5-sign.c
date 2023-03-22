#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @n: the char to be checked
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('-');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
