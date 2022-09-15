#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size:number of times width and length
 * Return: square formed by '#'
 */
void print_square(int size)
{
	int pl, cl;

	if (size > 0)
	{
		for (pl = 1; pl <= size; pl++)
		{
			_putchar('#');
			for (cl = 2; cl <= size; cl++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
