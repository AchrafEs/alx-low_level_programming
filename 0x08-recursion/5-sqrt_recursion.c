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
	int result;


	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		result = sqrt(n);
		return (result);
	}
	else
	{
		return (-1);
	}
}
