#include "main.h"
/**
 * _abs - prints absolute values
 * @k:input
 * Return: k,the absolute value
 */
int _abs(int k)
{
	if (k < 0)
	{
		k = -k;
	}
	else if (k == 0)
	{
		k = 0;
	}
	else
	{
		k = k;
	}
	return (k);
}
