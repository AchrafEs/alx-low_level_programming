#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - A function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: the value to be returned
 * @src: the string pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
