#include <stdio.h>

/**
 * main - A program that prints the alphabet
 * in lowercase, and then in uppercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
