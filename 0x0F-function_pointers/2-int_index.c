#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array to seaech from.
 * @size: size of the array.
 * @cmp: a pointer to the function.
 *
 * Return: the int found by the function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 1; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
