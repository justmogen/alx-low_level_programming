#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: number of strings passed to the function
 * @...:
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ndx = 0;
	char *s;
	va_list str;

	va_start(str, n);

	while (ndx < n)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (ndx != (n - 1) && separator != NULL)
			printf("%s", separator);
	ndx++;
	}
	printf("\n");

	va_end(str);
}
