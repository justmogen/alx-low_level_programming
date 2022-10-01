#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum amount of coins for a certain number
 * @argc: number of supplied arguments
 * @argv: Array of pointers to arguments.
 * Return: If the number of arguments not one - 1 else 0
 */
int main(int argc, char **argv)
{
	int cents, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		change++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", change);

	return (0);
}
