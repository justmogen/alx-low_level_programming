#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size:number of elements in the array used
 * @array:array used
 * @cmp:pointer to function to be used to compare values
 * Return: int_index returns the index of the first element
 *		for which the cmp function does not return 0
 *		if no element match and size <= 0 ,return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ndx = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	while (ndx < size)
	{
		if (cmp(array[ndx] != 0)
			return (ndx);
		ndx++;

	}
	return (-1)
}
