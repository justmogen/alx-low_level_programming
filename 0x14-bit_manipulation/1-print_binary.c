#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be changed to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);

		_putchar("%d",n % 2);
	}
}
