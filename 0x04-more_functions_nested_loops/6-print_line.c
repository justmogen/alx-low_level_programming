#include "main.h"
/**
 * print_line - fuction that draws a straight line
 * @n: input
 * Retturn: a straight line
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
