#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: the integer a
 * @b: the integer b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
