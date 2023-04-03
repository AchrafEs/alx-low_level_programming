#include "main.h"
#include <string.h>

/**
 * _strstr - A function that locates a substring.
 * @haystack: the string
 * @needle: the substring
 *
 * Return: NULL if the substring is founed, Or a pointer
 * to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t len = strlen(needle);
	char *ptr = haystack;

	if (len == 0)
	{
		return (haystack);
	}
	while ((ptr = strchr(ptr, *needle)) != NULL)
	{
		if (strncmp(ptr, needle, len) == 0)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
