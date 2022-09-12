#include "main.h"
/**
 * Description: will print a-z ten times
 *
 * Retuen: void success
 */
void print_alphabet_x10(void)
{
	int num;
	char letr;
	for(num = 0; num < 10; num++)
	{
		for(letr = 'a'; letr <= 'z'; letr++)
		{
			_putchar(letr);
		}
		_putchar('\n');
	}
}
