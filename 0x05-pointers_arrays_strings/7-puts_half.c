#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A function that prints half of a string.
 * @str: the string to be checked
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int k;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		k = (i - 1 / 2);
		k += 1;
	}
	else
	{
		k = i / 2;
	}
	for (; k < i; k++)
	{
		printf("%c", str[k]);
	}
	putchar('\n');
}
