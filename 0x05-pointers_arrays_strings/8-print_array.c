#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a:name of array
 * @n:number of elements to be printed
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l != n - 1)
			printf(", ");
	}
	printf("\n");
}
