#include "main.h"
#include <math.h>
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b:pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *		there is one or more chars in the string b that is not 0 or 1
 *		b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int ndx = 0, base = 1;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	while (b[ndx + 1])
	{
		if (b[ndx] != '0' && b[ndx] != '1')
		       return (0);
		ndx++;
	}
	while (ndx >= 0)
	{
		dec_val += ((b[ndx] - '0') * base);
		base *= 2;
		ndx--;
	}
	return (dec_val);
}
