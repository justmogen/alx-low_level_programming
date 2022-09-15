#include "main.h"
/**
 * _isupper - prints uppercase letters
 * @c: input
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
