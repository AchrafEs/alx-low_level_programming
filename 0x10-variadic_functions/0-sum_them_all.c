#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: a constant
 *
 * Return: the sum of arguments passed
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int arg = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		arg += va_arg(ap, int);
	}
	va_end(ap);
	return (arg);
}
