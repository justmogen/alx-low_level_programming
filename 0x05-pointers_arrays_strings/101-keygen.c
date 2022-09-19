#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - will generate the random valid password
 * Return: random values
 */
int main(void)
{
	int ndx = 0, ff1, ff2;
	char passwd[80];
	int sum = 0;

	srand(time(0));

	while (sum < 2772)
	{
		passwd[ndx] = 33 + rand() % 94;
		sum = sum + passwd[ndx++];
	}
	passwd[ndx] = '\0';
	if (sum != 2772)
	{
		ff1 = (sum - 2772) / 2;
		ff2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			ff1++;
		}
		for (ndx = 0; passwd[ndx]; ndx++)
		{
			if (passwd[ndx] >= (33 + ff1))
			{
				passwd[ndx] -= ff1;
				break;
			}
		}
		for (ndx = 0; passwd[ndx]; ndx++)
		{
			if (passwd[ndx] >= (33 + ff2))
			{
				passwd[ndx] -= ff2;
				break;
			}
		}
	}
	printf("%s", passwd);
	return (0);
}
