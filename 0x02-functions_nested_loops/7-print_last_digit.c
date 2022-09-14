#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *lnum=last digit
 *@lst:input
 *Return: value of last digit
 *
 */
int print_last_digit(int lst)
{
	int lnum;

	if (lst >= 0)
	{
		lnum = lst % 10;
	}
	else if (lst < 0)
	{
		lnum = -(lst % 10);
	}
	_putchar(lnum + '0');
	return (lnum);
}
