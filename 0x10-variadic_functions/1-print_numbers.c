#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int arg = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, int);
		printf("%d", arg);
		if (i < n - 1)
		{
			printf("%s", separator ? separator : ",");
		}
	}
	va_end(ap);
	putchar('\n');
}
