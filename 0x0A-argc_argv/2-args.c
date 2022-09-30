#include <stdio.h>
/**
 * main - print all inserted arguments one by one
 * @argc:number of supplied arguments
 * @argv:array of pointers of arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[]);
		argv++;
	return (0);
}
