#include <stdio.h>
int positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
	{
		printf("%d is positive", i);
	}
	return (0);
}

