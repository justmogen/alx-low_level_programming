#include "main.h"
/**
 * _islower - prints the lowercase values from a-z
 * Return: 1 if lowercase is found else 0
 * @c: single letter input for checking lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

