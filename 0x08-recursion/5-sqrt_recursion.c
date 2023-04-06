#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: an integer.
 *
 * Return: the int n if success, if error -1.
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (2 * _sqrt_recursion(n / 4));
	}
	else
	{
		return (-1);
	}
}
