#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a:integer matrix
 * @size:matrix size
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, sum1 = 0, ndx;

	for (ndx = 0; ndx < size; ndx++)
	{
		sum += a[ndx];
		a += size;
	}
	a -= size;
	for (ndx = 0; ndx < size; ndx++)
	{
		sum1 += a[ndx];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
