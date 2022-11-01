#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 *		to flip to get from one number to another
 * @n:number to be flipped
 * @m:nuber to flip n to
 * Calculate (n xOR m), since 0 xOR 1 and 1 xOR 0 is equal to 1.
 *		So calculating the number of set bits in n xOR m will give us the
 *		count of the number of unmatching bits in n and m,
 *		which needs to be flipped
 *
 * Return:number  of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0;
	unsigned longxOR = n ^ m;

	while (xOR > 0)
	{
		count++;
		xOR &= (xOR - 1);
	}
	return (count);
}

