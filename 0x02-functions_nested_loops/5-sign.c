#include "main.h"
/**
 * print_sign - prints signs of + - and 0 according to conditions
 * Return: 1 if > ,0 if 0, -1 if <
 * @n:input
 */
int print_sign(int n)
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
}
