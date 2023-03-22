#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs - A function that computes the absolute value
 * of an integer.
 * @i: the int to be checked
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abs_i;

		abs_i = i * -1;
		return (abs_i);
	}
	return (i);
}
