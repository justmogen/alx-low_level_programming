#include "main.h"
#include <stddef.h>
/**
 * clear_bit - function that returns the number of bits you would
 *		need to flip to get from one number to another.
 * @n:pointer to the bit to be changed
 * @index:is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;

	if (n == NULL)
		return (-1);
	count = 1 << index;

	if ((count | *n) == *n)
		*n = *n ^ count;

	return (1);
}
