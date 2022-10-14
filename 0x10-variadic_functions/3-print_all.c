#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void p_int(va_list arg);
void p_char(va_list arg);
void p_float(va_list arg);
void p_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * p_int - prints an integer
 * @arg:list of arguments pointing to int to be printed
 */
void p_int(var_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * p_char - print a char
 * @arg:list of arguments pointing to character to be printed
 */
void p_char(va_list arg)
{
	char ltr;

	ltr = va_arg(arg, int);

	printf("%c", ltr);
}

/**
 * p_float - prints a float value
 * @arg:list of arguments pointing to the float to be printed
 */
void p_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * p_string - prints a string
 * @arg:list of arg pointing to string to be printed
 */
void p_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
		printf("(nil)");
		return;

	printf("%s", string);
}
 /**
 * print_all - prints anything then a new line
 * @format: a list of types of arguments passed to the function
 *		c: char
 *		i: integer
 *		f: float
 *		s: char * (if the string is NULL, print (nil) instead
 *		any other char should be ignored
 * @...:variable number of arguments to be printed
 * Print a new line at the end of your function
 * Description: any arg not matching int,char,float or char * /string
 *	is ignored
 * If a string argument is NULL, (nil) is printed instead
 */
void print_all(const char * const format, ...)
{
	va_list argmt;
	char *div = "";
	int a = 0, b = 0;
	printer_t funcs[] = {
		{"c", p_int},
		{"i", p_char},
		{"f", p_float},
		{"s", p_string}
	};

	va_ start(argmt, format);

	while (format && (*(format + a)))
	{
		b = 0;
		while (b < 4 && (*(format + a) != *(funcs[b].symbol)))
			b++;

		if (b < 4)
		{
			printf("%s", div);
			funcs[b].print(argmt);
			div = ", ";
		}
		a++;
	}

	printf("\n");

	va_end(argmt);
}
