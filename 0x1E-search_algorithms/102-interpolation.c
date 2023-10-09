#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in
 * a sorted array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located, Or -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l, h;
	size_t pos;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	l = 0;
	h = size - 1;
	while (l <= h && value >= array[l] && value <= array[h])
	{
		if (l == h)
		{
			if (array[l] == value)
			{
				printf("Value checked array[%d] = [%d]\n", l, array[l]);
				return (l);
			}
			return (-1);
		}
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
		{
			l = pos + 1;
		}
		else
		{
			h = pos - 1;
		}
	}
	return (-1);
}
