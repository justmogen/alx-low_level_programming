#include "main.h"
/**
 * print_number - prints integer
 * @n:input integer
 */
void print_number(int n)
{
	unsigned int ndx;

	ndx = n;

	if (n < 0)
	{
		_putchar('-');
		ndx = -ndx;
	}
	if (ndx / 10)
	{
		print_number(ndx / 10);
	}
	_putchar((ndx % 10) + '0');
}
