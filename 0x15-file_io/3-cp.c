#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * f_closer - closes the file descriptor
 * @fd:fd to be closes
 * if you can not close a file descriptor , exit with code 100 and
 *	print "Error: Can't close fd FD_VALUE", followed by a new line,
 *	on the POSIX standard error
 */
void f_closer(int fd)
{
	ssize_t clos;

	clos = close(fd);
	if (clos == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buf - creates a buffer that reads a 1024 bytes
 * @fl:file to store buffer created
 * if you can not create or if write to file_to fails,
 *	exit with code 99 and print "Error: Can't write to fl"
 */
char *create_buf(char *fl)
{
	char* buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't write to %d\n", fl);
		exit(99);
	}
	return (buf);
}

/**
 * main - copies contents of file to another file
 * @argv:array of pointers to arguments
 * @argc:number of supplied arguments
 * if the number of argument is not the correct one,
 *	exit with code 97 and print Usage: cp file_from file_to
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it,
 *	exit with code 98 and print Error: Can't read from file _
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *buf;
	int rd, wr, to, from;
	
	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(to, buf, rd);

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[2]);
			free(buf);
			exit(98);
		}
		
		if (to == -1 || wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buf);
	f_closer(from);
	f_closer(to);

	return (0);
}
