# include "search_algos.h"

/**
 * binary_search_I - a binary search function
 * @array: a pointer to the first element of the array
 * @left: the left
 * @right: the right
 * @value: the value to search for
 *
 * Return: -1.
 */
int binary_search_I(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

/**
 * exponential_search - a function that searches for a value in
 * a sorted array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located, Or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t right;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_I(array, i / 2, right, value));
}
