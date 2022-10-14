#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all parameters
 * @n:number of parameters passed
 * @...:variable number of parameters to calculate the sum
 * Return: If n == 0, return 0 else the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sumd = 0, ndx;
	va_list numb;

	va_start(numb, n);

	while (ndx = 0;ndx < n; ndx++)
		sumd += va_arg(numb, int);

	va_end(numb);
	return (sumd);
}
