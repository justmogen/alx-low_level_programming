#include "main.h"
/**
 * puts_half - prints half of a string
 * @str:input
 * Return: half string
 */
void puts_half(char *str)
{
	int lengt = 0, s, ct;

	for (s = 0; str[s] != '\0'; s++)
	{
		lengt++;
	}
	ct = (lengt / 2);

	if ((lengt % 2) == 1)
	{
		ct = ((lengt + 1) / 2);
	}
	for (s = ct; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
