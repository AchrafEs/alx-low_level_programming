#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A function that prints 10 times the numbers
 * from 0 to 14, followed by a new line
 *
 * Return: numbers from 0 to 14.
 */
void more_numbers(void)
{
	int i, a;


	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				putchar((a / 10) + '0');
			}
			putchar((a % 10) + '0');
		}
		putchar('\n');
	}
}
