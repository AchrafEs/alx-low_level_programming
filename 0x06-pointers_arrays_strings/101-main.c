#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_number(0);
	putchar('\n');
	print_number(3);
	putchar('\n');
	print_number(-1);
	putchar('\n');
	print_number(10);
	putchar('\n');
	print_number(-99);
	putchar('\n');
	print_number(1024);
	putchar('\n');
	print_number(-4096);
	putchar('\n');
	print_number(INT_MAX);
	putchar('\n');
	print_number(INT_MIN);
	putchar('\n');
	return (0);
}
