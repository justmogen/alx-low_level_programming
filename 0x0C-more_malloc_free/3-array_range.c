#include "main.h"
#include <stdlib.h>
/**
 * array_range - creating an array of integers
 * @min:first inserted value
 * @max:2nd value
 * Return: Pointer to newly created array else NULL if malloc fails
 * NULL if min > max
 * created array should contain values from min to max that order
 */
int *array_range(int min, int max)
{
	int ndx, *arr, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
		return (NULL);
	for (ndx = 0; ndx < n; ndx)
	{
		arr[ndx] = min++;
	}
	return (arr);
}
