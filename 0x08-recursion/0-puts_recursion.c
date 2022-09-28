#include "main.h"
/**
 * _puts_recursion - prints a string like puts()
 * @s:the string
 * Return: string 
 */
void _puts_recursion(char *s)
{
	char *str = s;

	if (*str == '\0')
	{
		_putchar('\n');
	}
	else 
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
}
