#include <stdio.h>
/**
 * main - print all inserted arguments one by one
 * @argc:number of supplied arguments
 * @argv:array of pointers of arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)

		printf("%s\n", argv[count]);

	return (0);
}
