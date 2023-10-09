#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in
 * a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: The value to search for
 *
 * Return: index where value is located, or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_step, min;
	int prev, max;
	int i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	jump_step = (int)sqrt(size);
	prev = 0;
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev += jump_step;
		if (prev >= (int)size)
		{
			break;
		}
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	min = prev - jump_step;
	max = (prev < (int)size) ? prev : (int)size - 1;
	for (i = min; i <= max; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
