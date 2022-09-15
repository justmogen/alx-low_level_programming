#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints 1-100,x3 fizz,x5 buzz for both fizzbuzz
 * Return: always 0
 */
int main(void)
{
	int k;
	char fz[] = "Fizz";
	char bz[] = "Buzz";
	char fzbz[] = "FizzBuzz";

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0)
			printf("%s ", fz);
		else if (k % 5 == 0)
			printf("%s ", bz);
		else if ((k % 3 == 0) && (k % 5 == 0))
			printf("%s ", fzbz);
		else if (k == 100)
			printf("%s ", bz);
		else
			printf("%d ", k);
	}
	printf("\n");
	return (0);
}
