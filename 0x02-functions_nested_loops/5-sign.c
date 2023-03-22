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
		_putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	else
	{
		return (-1);
		_putchar(48);
	}
}
