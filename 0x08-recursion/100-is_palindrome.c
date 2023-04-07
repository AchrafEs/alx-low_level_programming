#include "main.h"
#include <string.h>

int check_if_palindrome(char *s, int left, int right);

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: the string to be checked
 * 
 * Return: 1 if success, otherwise 0.
 */
int is_palindrome(char *s)
{
	size_t len = strlen(s);
	
	if (len == 0 || len == 1)
	{
		return (1);
	}
	if(*s == check_if_palindrome(s, 0, len - 1))
	{
		return (1);
	}
	return (0);
}


/**
 * check_if_palindrome - A function that checks if string is
 * palindrome
 * @s: string to check
 * @left: the beginning of string
 * @right: the end of string
 *
 * Return: 1 if true, 0 if false.
 */
int check_if_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_if_palindrome(s, left + 1, right - 1));
	}
	else
		return (0);
}
