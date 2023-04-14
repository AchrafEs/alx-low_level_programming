#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void multiply(char *num1, char *num2, char *result);

int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	int len1, len2, i;

	if (argc != 3)
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
		return (1);
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

void multiply(char *num1, char *num2, char *result)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j;
	int digit1, digit2, product, pos1, pos2, sum;

	for (i = 0; i < len1 + len2; i++)
	{
		result[i] = '0';
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = (result[pos2] - '0') + product;
			result[pos2] = (sum % 10) + '0';
			result[pos1] += sum / 10;
		}
	}
}
