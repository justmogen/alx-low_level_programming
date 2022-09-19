#include "main.h"
/**
 * puts2 - function that prints even char
 * @str: input
 * Return: a string
 */
void puts2(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st++)
	{
		if (st % 2 == 0)
		{
			_putchar(str[st]);
		}
	}
	_putchar('\n');
}
