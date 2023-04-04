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
	int i, j;
	int sum, sum_1;
	int rows = sizeof(a) / sizeof(a[0]);
	int columns = sizeof(a[0]) / sizeof(*a);

	for (i = 0; i < rows; i++)
	{
		sum += a[i] + size;
		printf("%d, ", sum);
	}
	for (j = 0; j < columns; j++)
	{
		sum_1 += a[j] + size;
		printf("%d, ", sum_1);
	}
	putchar('\n');
}
