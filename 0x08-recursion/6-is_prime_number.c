#include "main.h"

/**
 * int is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the int to be checked
 *
 * Return: 1 if success, otherwise 0.
 */
int is_prime_number(int n)
{
	int i = 0;

	if (i == 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
		is_prime_number(n, i - 1);
	return (1);
}
