#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that multiplies two positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	int num1, num2, mul, i;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
