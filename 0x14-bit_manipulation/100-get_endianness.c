#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Endianness means that the bytes in computer memory are
 *		read in a certain order.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int ndx;

	ndx = 1;
	if (*(char *)&ndx == 1)
		return (1);
	else
		return (0);
}
