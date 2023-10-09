# include "search_algos.h"

/**
 * binary_search_recursive - a binary search function
 * @array: a pointer to the first element of the array to search in
 * @left: The left
 * @right: The right
 * @value: the value to search for
 *
 * Return: -1.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
	{
		return (i);
	}
	if (array[i] >= value)
		return (binary_search_recursive(array, left, i, value));
	return (binary_search_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - a function that searches for
 * a value in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located, Or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (binary_search_recursive(array, 0, size - 1, value));
}
