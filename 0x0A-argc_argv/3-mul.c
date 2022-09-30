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
	int n1, n2, mult;
	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mult = n1 * n2;

	if (argc != 3)
		printf("Error\n");
		return (1);

	printf("%d\n", mult);

	return (0);
}
