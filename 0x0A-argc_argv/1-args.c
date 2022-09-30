#include <stdio.h>
/**
 * main - print the number of the strings passed as arguments
 * @argc:number of arguments used
 * @argv:array of pointers used in arguments
 * Return: 0 success
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
