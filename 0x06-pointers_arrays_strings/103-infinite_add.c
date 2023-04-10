#include "main.h"
#include <string.h>

/**
 * *infinite_add - a function that adds two numbers.
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that will be used to store the result
 * @size_r: the buffer size.
 *
 * Return: A pointer to the result or 0 if the result can't be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len_r = size_r -1;
	int carry = 0;

	if (len1 + len2 > len_r)
	{
		return (0);
	}
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		int sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		r[k] = '0' + sum % 10;
		k++;
		carry = sum / 1;
	}
	r[k] = '\0';
	for (int i = 0, j = k - 1; i < j; i++, j--)
	{
		char tem = r[i];
		r[i] = r[j];
		r[j] = tem;
	}
	return (r);
}
