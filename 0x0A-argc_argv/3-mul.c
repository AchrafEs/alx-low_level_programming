#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 if success, 1 Error if faild.
 */
int main(int argc, char **argv)
{
	int i;
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc -1; i++)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
	}
	printf("%d\n", mul);
	return (0);
}
