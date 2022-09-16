#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @n:number to be printed
 */
void print_number(int n)
{
	unsigned int nm = k;

	if (k < 0)
	{
		_putchar('-');
		nm = -nm;
	}
	if (nm > 9)
	{
		print_number(nm / 10);
	}
	_putchar(nm % 10 + '0');
}
