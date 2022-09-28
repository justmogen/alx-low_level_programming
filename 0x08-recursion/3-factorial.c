#include "main.h"
/**
 * factorial - find factorial of a number
 * @n:input
 * Return: -1 if n<0 or factorial of 0 or 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
