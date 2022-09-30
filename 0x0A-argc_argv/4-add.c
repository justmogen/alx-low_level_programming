#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc:number of arguments
 * @argv:arrays to pointers in arguments
 * Return: 1 and print error if arguments are symbols
 */
int main(int argc, char **argv)
{
	int add = 0, ind, count;

	for (count = 0; count < argc; count++)
	{
		for (ind = 0; argv[count][ind]; ind++)
		{
			if (argv[count][ind] < '0' || argv[count][ind] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[count]);
	}
	printf("%d\n", add);
	return (0);
}

