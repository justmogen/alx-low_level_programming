#include <stdio.h>
/**
 * main - prints first 50  fibonacci numbers
 * starting with 1 and 2
 * Return: 0 always
 */
int main(void)
{
	int counter;
	long unsigned int fn1 = 0, fn2 = 1, sum;
	
	for (counter = 0; counter < 50; counter++)
	{
		sum = fn1 + fn2;
		printf("%lu", sum);

		fn1 = fn2;
		fn2 = sum;

		if (counter != 49)
		{
			printf(", ");
		}
		else
		{
			printf(" ");
		}
	}
	return (0);
}
