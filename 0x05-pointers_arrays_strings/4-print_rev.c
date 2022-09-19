#include "main.h"
/**
 * print_rev - function that prints a sting in reverse followed by a new line
 * @s: input
 * Return: a string with a new line
 */
void print_rev(char *s)
{
	int p;

	for (p = 0; s[p] != 0; p++)
	{
	}
	for (p = (p - 1); p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
