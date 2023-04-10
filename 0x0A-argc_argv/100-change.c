#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, cents = 0;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount <= 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		cents += amount  / coins[i];
		amount %= coins[i];
	}
	printf("%d\n", cents);
	return (0);
}
