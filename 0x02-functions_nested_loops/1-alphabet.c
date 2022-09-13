#include "main.c"
#include "main.h"
/**
*print_alphabet - prints all alphabets from a-z in lowercase
* Description: prints alphabet a-z in lowercase
* Return: void
*/
void print_alphabet(void)
{
	char letr = 'a';

	while (letr <= 'z')
	{
		_putchar(letr);
		letr++;
	}
	_putchar('\n');
}

