#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *leet - a function that encodes a string into 1337.
 * @str: a character
 *
 * Return: the encoded string.
 */
char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int letter_count = sizeof(letters) / sizeof(letters[0]);
	int i, j;
	int str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		for (j = 0; j < letter_count; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
