#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  A function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a pointer to the content of s1 & s2, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = (char *)malloc(len1 + len2 + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
