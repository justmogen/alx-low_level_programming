#include "main.h"
/**
 * more_numbers - function that prints 10 numbers from 0-14
 * Return: void
 */
void more_numbers(void)
{
	int l, ftin;
	for (ftin = 0; ftin <=14; ftin+=)
	{
		for (l = 0; l < 10; l++)
		{
			if (ftin >= 10)
			{
				_putchar((ftin / 10) + '0');
			}
			_putchar((ftin % 10) + '0');
		}
		_putchar('\n');
	}
}
