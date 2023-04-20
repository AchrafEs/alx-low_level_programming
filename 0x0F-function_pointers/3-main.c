#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * main - A program that performs simple operations.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, len;
	int calc = 0;
	int (*operator)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	len = strlen(argv[2]);
	operator = get_op_func(argv[2]);
	if (len != 1 || operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (strcmp(argv[3], "/") == 0 || strcmp(argv[3], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	calc = operator(num1, num2);
	printf("%d\n", calc);
	return (0);
}
