#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: the string to be checked.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
