#include "main.h"
/**
 * _print_rev_recursion - print strings recursively
 * @s:input
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	char *str = s;

	if (*str == '\0')
		_print_rev_recursion(str + 1);
	else
		return (0);
	_putchar(*str);
}
