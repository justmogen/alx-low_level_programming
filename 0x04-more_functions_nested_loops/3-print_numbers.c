#include "main.h"
/**
 * print_numbers - print numbers from 0-9
 * Return: void
 */
void print_numbers(void)
{
	char m;

		for (m = '0'; m <= '9'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
