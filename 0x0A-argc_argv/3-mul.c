#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply two integer arguments
 * @argc:number of arguments
 * @argv:arrays of pointers to arguments
 * Return: Error if no argument and return 1 else the multiplication
 */
int main(int argc, char **argv)
{
	int count, add = 0;
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			add += atoi(argv[count]);
		}
		printf("%d\n", add);
	}
	return (add);
}
