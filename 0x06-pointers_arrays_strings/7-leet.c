#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *leet - a function that encodes a string into 1337.
 * @*: a character
 *
 * Return: the encoded string.
 */
char *leet(char *)
{
	char str[];
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int numbers[] = {4, 3, 0, 7, 1};
	int letter_count = sizeof(letters)/sizeof(letters[0]);
	int i, j;
	int str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		for (j = 0; j < letter_count; j++)
		{
			if (str[i] = letters[j])
			{
				str[i] = numbers[j] + '0';
				break;
			}
		}
	}
	return (str);
}
