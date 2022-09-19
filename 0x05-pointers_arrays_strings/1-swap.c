#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: integer one
 * @b: integer b
 * return: swaped integers
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
