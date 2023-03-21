// _putchar.c

#include <unistd>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

// 0-putchar.c

#include <stdio.h>

/**
 * main - A program that prints a text
 * Return: Always 0 (success)
 */
int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 9);
	return (0);
}
