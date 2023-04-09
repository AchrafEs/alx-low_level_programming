#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success), 1 Error if fail.
 */
int main(int argc, char **argv)
{
	int i, sum = 0;
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
