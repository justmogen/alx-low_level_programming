#include "main.h"
/**
 * _strlen_recursion - print length of strings
 * @s:input
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	char *str = s;

	if (*str == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(str  + 1));
}
