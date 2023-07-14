#include "search_algos.h"

/**
 * linear_search  - uses linear search algo to search for a value in an array
 * @array: inserted array
 * @size: size of array
 * @value: one to be checked on the array
 *
 * Return: 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t c;

	if (array == NULL)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%li] = [%i]\n", c, array[c]);
		if (array[c] == value)
		{
			return (c);
		}
	}
	return (-1);

