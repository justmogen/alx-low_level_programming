#include "main.h"
/**
 * _isalpha - prints alpha letters
 * Return: 1 if it is an alpha otherwise 0
 * @c: checks for alphabets
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
