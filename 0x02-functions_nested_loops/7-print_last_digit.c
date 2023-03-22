#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @i: the integer to be checked
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int last_i;

	last_i = i % 10;
	return (last_i);
}
