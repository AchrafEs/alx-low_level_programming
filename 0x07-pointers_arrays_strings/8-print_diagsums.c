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
	int sum = 0, sum_1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		putchar(',');
		printf("%d", sum);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum_1 += *(a + i * size + j);
		putchar(',');
		printf("%d", sum_1);
	}
	putchar('\n');
}
