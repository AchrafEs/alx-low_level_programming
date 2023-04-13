#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes
 *
 * Return: a pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *str;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n < len2)
	{
		len2 = n;
	}
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		str[len1 + i] = s2[i];
	}
	str[len1 + len2] = '\0';
	return (str);
}
