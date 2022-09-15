#include "main.h"
/**
 * _isdigit - function to check for a digit from 0-9
 * @c:input
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
