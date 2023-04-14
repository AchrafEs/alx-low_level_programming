#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void multiply(char *num1, char *num2, char *result);

/**
 * main - a program that multiplies two positive numbers.
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	int len1, len2, i, j;
	int len;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	len1 = strlen(num1);
	len2 = strlen(num2);
	result = malloc((len1 + len2) * sizeof(char));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	multiply(num1, num2, result);
	i = 0;
	while (result[i] == '0' && i < len1 + len2 - 1)
	{
		i++;
	}
	printf("%s\n", &result[i]);
	free(result);
	return (0);
}
/**
 * multiply - A function that multiplays two numbers.
 * @num1: the first number
 * @num2: the second number
 * @result: the result
 *
 * Return: void
 */

void multiply(char *num1, char *num2, char *result)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j, carry, sum;
	int *temp;
	int *final;

	temp = malloc((len1 + len2) * sizeof(int));
	final = malloc((len1 + len2) * sizeof(int));
	for (i = 0; i < len1 + len2; i++)
	{
		temp[i] = 0;
		final[i] = 0;
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + carry;
			carry = sum / 10;
			temp[i + j + 1] += sum % 10;
			if (temp[i + j + 1] > 9)
			{
				temp[i + j + 1] -= 10;
				carry++;
			}
		}
		temp[i + j + 1] += carry;
	}
	carry = 0;
	for (i = len1 + len2 - 1; i >= 0; i--)
	{
		sum = temp[i] + carry;
		final[i] = sum % 10;
		carry = sum / 10;
	}
	for (i = 0; i < len1 + len2; i++)
	{
		result[i] = final[i] + '0';
	}
	result[i] = '\0';
	free(temp);
	free(final);
}
