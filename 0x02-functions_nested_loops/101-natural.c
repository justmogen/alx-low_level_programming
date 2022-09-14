#include <stdio.h>
/**
 * main - prints multiples of 3 and 5
 * and their sum
 * Return: always 0
 */
int main(void)
{
	int num;

	int sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			sum += num;
		}
	}
		printf("%d\n", sum);
		return (0);
}
