#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * + using jump search algorrithm
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * If value is not present in array or if array is NULL, your
 * +function must return -1
 * Compile <math.h> with '-lm'
 * Return: target value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev, curr, i;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	prev = 0;
	curr = jump;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (curr < size)
	{
	if (array[curr] >= value)
	break;

	prev = curr;
	curr += jump;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	i = prev;
	while (i <= fmin(curr, size - 1))
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
		printf("Found %d at index: %lu\n", value, i);
		return (i);
	}
	i++;
	}
	return (-1);
}
