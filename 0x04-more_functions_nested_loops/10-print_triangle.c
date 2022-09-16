#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size:size of the triangle
 * Return: triangle formed through '#'
 */
void print_triangle(int size)
{
	int cr, cm, cn;

	if (size > 0)
	{
		for (cr = 0; cr <= (size - 1); cr++)
		{
			for (cm = 0; cm < (size - 1) - cr; cm++)
			{
				_putchar(' ');
			}
			for  (cn = 0; cn <= cr; cn++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
