#include "main.h"
int prime_num(int n, int check);
/**
 * is_prime_number - check for prime number
 * @n:input num to check it
 * Return:1
 */
int is_prime_number(int n)
{
	return (prime_num(2, n));
}
/**
 * prime_num - if prime print 1 else 0
 * @n:checked through
 * @check:used to check @n
 * Return: 1 if prime else 0
 */
int prime_num(int n, int check)
{
	if (n % check == 0 && n <= 1)
		return (0);
	if (n == check - 1)
		return (1);
	if (check > n)
		return (prime_num(n + 1, check));
	return (1);
}
