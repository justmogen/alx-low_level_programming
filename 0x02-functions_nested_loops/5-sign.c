#include "main.h"
/**
 * print_sign - prints signs of + - and 0 according to conditions
 * Return: 1 and print + if n is greater than 0 else if return 0 and print 0 if n 0 else print - return -1 if n < 1
 * @n: take inputs
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
