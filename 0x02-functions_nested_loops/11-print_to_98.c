#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints natural numbers to 98 
 *whether the number n is < or > than 98
 *@n: takes input 
 */
void print_to_98(int n);
{
	if (n =< 98)
	{
		printf("%d", n);
		while (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	else if (n >= 98)
	{
		printf("%d", n);
		while (n != 98)
		{
			printf(", ");
		}
		n--;
	}
	else 
	{
		printf("98");
	}
	printf("\n");
}


