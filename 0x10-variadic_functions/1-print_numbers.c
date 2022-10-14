#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator:strings to be printed between numbers
 * @n:number of integers passed to the functions
 * @...:variable  number of numbers to be printed
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ndx = 0;
	va_list numb;

	va_start(numb, n);

	while (ndx < n)
	{
		ndx++;
		printf("%d", va_arg(numb, int));

		if (ndx != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(numb);
}
