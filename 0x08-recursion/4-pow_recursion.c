#include "main.h"
/**
 * _pow_recursion - print x raised to power y
 * @x:input to be raised
 * @y:power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if(y == 0)
	{
		return (0);
	}
	else
	{
		x *= _pow_recursion(x, y - 1);
		return (x);
	}
}
