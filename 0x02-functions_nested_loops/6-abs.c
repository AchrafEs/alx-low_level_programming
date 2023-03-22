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
	int abs_i = abs(i);

	printf("the absolute value of %d is %d\n", i, abs_i);
	return (0);
}
