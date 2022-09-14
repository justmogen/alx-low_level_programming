#include "main.h"
/**
*main - Prints char using putchar
*
*Description:  function that prints strings
*Return: returns 0 success
*/
int main(void)
{
	char c[8] = "_putchar";

	int s;

	for (s = 0;  s < 8; s++)
	{
		_putchar(c[s]);
	}
	_putchar('\n');
	return (0);
}

