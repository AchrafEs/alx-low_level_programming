#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all the multiples
 *  of 3 or 5 below 1024 (excluded), followed by a new line.
 *  Return: Always success
 */
int main(void)
{
	int i, a = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			a += i;
		}
		i++;
	}
	printf("%d\n", a);
	return (0);
}
