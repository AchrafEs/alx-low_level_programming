#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * passed to it.
 * @argv: argument vector.
 * @argc: argument count.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
