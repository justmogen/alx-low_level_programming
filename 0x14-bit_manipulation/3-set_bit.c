#include "main.h"
#include <stddef.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index:is the index, starting from 0 of the bit you want to set
 * @n:a poiner to the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;

	if (n == NULL || index > 31)
		return (-1);
	count = 1 << index;

	*n = *n | count;
	return (1);
}
