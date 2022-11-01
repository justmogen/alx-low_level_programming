#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index:is the index, starting from 0 of the bit you want to get
 * @n:the bit
 * Return: the value of the bit at index index or -1 if an
 *		error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	count = (n >> index) & 1;

	if ((count == 1) || (count == 0))
		return (count);

	else
		return (-1);
}
