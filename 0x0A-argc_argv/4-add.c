#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc:number of arguments
 * @argv:arrays to pointers in arguments
 * Return: 1 and print error if arguments are symbols
 */
int main(int argc, char *argv[])
{
	int add = 0, count;

	if (argc < 1)
		return (0);

	for (count = 1; count < argc; count++)
	{
		if (!atoi(argv[count]))
			printf("Error");
			return (1);

		add += atoi(argv[count]);
	}
	printf("%d\n", add);
	return (0);
}

