#include "main.h"
/**
 * reverse_array - function that reverses the content of array of integers
 * @a:array of integers to be reversed
 * @n:number of elements in array
 * Return: i
 */
void reverse_array(int *a, int n)
{
	int i, pm;

	for (i = 0; i < n / 2; i++)
	{
		pm = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = pm;
	}
}
