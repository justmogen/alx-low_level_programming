#include <stdio.h>
/**
 * main - prints the name of the file
 * @argc:total number of supplied argument
 * @argv:array of pointers to arguments
 * Return:0 success
 */
int main(int __attribute__((__unused__))argc, char **argv)
{
	printf("%s\n",argv[0]);
	return (0);
}
