#include "main.h"
/**
 * _pow_recursion - print x raised to power y
 * @x:input to be raised
 * @y:power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	int de;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		de = x * _pow_recursion(x, y - 1);
		return (de);
	}
}
