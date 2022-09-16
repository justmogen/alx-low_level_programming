#include <stdio.h>
/**
 * main - prints prime values
 * Return: always 0
 */
int main(void)
{
	long prn = 612852475143, sion;

	while (sion < (prn / 2))
	{
		if ((prn % 2) == 0)
		{
			prn /= 2;
			continue;
		}
		for (sion = 3; sion < (prn / 2); sion += 2)
		{
			if ((prn % sion) == 0)
				prn /= sion;
		}
	}
	printf("%ld\n", prn);
	return (0);
}
