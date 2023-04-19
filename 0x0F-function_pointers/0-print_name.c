#include "function_pointers.h"
#include <stdio.h>

void print(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}
/**
 * print_name - A function that prints a name
 * @name: the name to print.
 * @f: a pointer to the function to call
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
