#include "main.h"
#include "stdlib.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @letters:is the number of letters it should read and print
 * @filename:the file to be read
 * Return: the actual number of letters it could read and print
 * if write fails or does not write the expected amount of bytes, return 0
 * if filename is NULL return 0
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, 0_RDONLY);

	if (file == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
		return (0);

	r = read(file, buffer, letters);
	if (r == -1)
		return (0);
	
	buf[letters] = '\0';
	wr = write(1, buffer, r);
	if (wr == -1)
		return (0);

	free(buffer);
	close(file);
	return (wr);
}
