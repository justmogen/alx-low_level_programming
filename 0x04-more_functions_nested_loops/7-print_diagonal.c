#include "main.h"
/**
 * print_line - function that draws a straight diagonal line on terminal
 * @n:input number of times
 * Return: diagonal straight line
 */
void print_diagonal(int n)
{
	int p, dn;

	if (n > 0)
	{
		for (p = 1; p <= n; p++)
		{
			for (dn = 1; dn < p; dn++)
			{
				_putchar(' ');
			}
		_putchar('\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
