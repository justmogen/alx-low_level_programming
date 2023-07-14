#include "search_algos.h"

/**
 * binary_search - searches values in a sorted array of integers
 * @array: pointer to first element of the array to search in
 * @value: value to search for
 * @size: number of elements in array
 *
 * Return: index where value is located  else array=NULL, -1
 */

int binary_search(int *array, size_t size, int value)
{
	int beg, cent, end;
	int id;

	if (array == NULL)
	{
		return (-1);
	}

	beg = 0;
	end = size - 1;

	while (beg <= end)
	{
		cent = (beg + end) / 2;
		printf("Searching in array: ");
		for (id = beg; id <= end; id++)
			printf("%i%s", array[id], id == end ? "\n" : ", ");

		if (array[cent] < value)
			beg = cent + 1;
		else if (array[cent] > value)
			end = cent - 1;
		else
			return (cent);
	}
	return (-1);
}
