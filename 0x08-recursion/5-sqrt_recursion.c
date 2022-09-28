#include "main.h"
/**
 * sqrroot - find square root
 * @n:input
 * @s:tested natural number
 * Return:square root if natural number found
 */
int sqrroot(int n, int s)
{
	if (n < 0)
		return (-1);
	if (n == (s * s))
		return (s);
	if (n < (s * s))
		return (-1);
	return (sqrroot(n, s + 1));
}
/**
 * _sqrt_recursion - find sqrroot of natural numbers
 * @n:input
 * Return:sqrroot
 */
int _sqrt_recursion(int n)
{
	return (sqrroot(n, 1));
}
