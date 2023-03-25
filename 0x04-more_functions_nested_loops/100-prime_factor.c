#include <stdio.h>
#include <math.h>

/**
 * main - A function that prints the factor of the number
 * Return: Always 0 (success)
 */
int main(void)
{
	long l, max_l;
	long num = 612852475143;
	double square = sqrt(num);

	for (l = 1; l <= square; l++)
	{
		if (num % l == 0)
		{
			max_l =  num / l;
		}
	}
	printf("%ld\n", max_l);
	return (0);
}
