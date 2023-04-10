#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: the first integer
 * @size: the second integer
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0, sum_1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum_1 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum, sum_1);
}
