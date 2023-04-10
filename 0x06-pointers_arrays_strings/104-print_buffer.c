#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer.
 * @b: the buffer to be printed
 * @size: the size of the buffer.
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int o = 0;
	int i, j, c;

	if (size <= 0)
	{
		printf("\n");
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
			{
				printf("%02x", *(b + o + i));
			}
			else
			{
				printf("  ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			c = *(b + o + i);
			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
