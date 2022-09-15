#include "main.h"
/**
 * print_diagonal - draws a straight line on terminal
 * @n: input
 * Return: drraws a straight line
 */
void print_diagonal(int n)
{
	int p;

	if (n > 0)
	{
		for (p = 1; p <= n; p++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
