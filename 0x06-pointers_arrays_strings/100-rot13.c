#include "main.h"
#include <string.h>

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the string
 *
 * Return: the encoded string
 */
char *rot13(char *str)
{
	char letters[] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};
	char rot__13[] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
	int letter_count = sizeof(letters) / sizeof(letters[0]);
	int i, j;
	int str_len = strlen(str);

	for (i = 0; i < str_len; i++)
	{
		for (j = 0; j < letter_count; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rot__13[j];
				break;
			}
		}
	}
	return (str);
}
