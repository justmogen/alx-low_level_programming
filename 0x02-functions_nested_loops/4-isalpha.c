#include "main.h"
/**
 * _isalpha - prints alpha letters only
 * Return: 1 if it is an alpha otherwise 0
 * @p: checks for alphabets
 */
int _isalpha(int p);
{
	if ((p => 'a' && p =< 'z') || (p => 'A' &&p =< 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
