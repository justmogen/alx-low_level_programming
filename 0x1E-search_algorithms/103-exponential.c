#include "search_algos.h"

/**
 * binary_search_rec - recursive binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: the starting index of the search range
 * @high: the ending index of the search range
 * @value: value to search for
 *
 * Return: the index where the value is located,
 *         or -1 if the value is not present
 */

int binary_search_rec(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_rec(array, low, mid - 1, value));
		return (binary_search_rec(array, mid + 1, high, value));
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where the value is located,
 *	or -1 if the value is not present or if the array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, prev = 0, idx;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		prev = bound;
		bound *= 2;
	}

	if (bound >= size)
		bound = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, bound);

	idx = binary_search_rec(array, prev, bound, value);

	return (idx);
}
