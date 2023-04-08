#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argv: argument vector
 * @argc: argument count.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
