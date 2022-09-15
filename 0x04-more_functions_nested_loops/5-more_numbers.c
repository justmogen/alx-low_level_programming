#
#include "main.h"
/**
 * more_numbers - function that prints 10 numbers from 0-14
 * Return: void
 */
void more_numbers(void)
{
	int l, ftin;

	for (l = 0; l < 10; l++)
	{
		for (ftin = 0; ftin <= 14; ftin++)
		{
			if (ftin > 9)
			{
				_putchar((ftin / 10) + '0');
			}
			_putchar((ftin % 10) + '0');
		}
		_putchar('\n');
	}
}
