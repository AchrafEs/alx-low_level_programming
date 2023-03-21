#include "main.h"

/**
 * print_alphabet - A program that prints the alphabet
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		_putchar(C);
	}
	_putchar('\n');
}
