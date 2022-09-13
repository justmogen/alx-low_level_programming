#include "main.h"
/**
*print_alphabet - prints all alphabets from a-z in lowercase
* Description: prints alphabet a-z in lowercase
* Return: void
*/
void print_alphabet(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		_putchar(z);
		z++;
	}
	_putchar('\n');
}

