#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:name of the file
 * @text_content:string to add at end of file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 *
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist or if you
 *	do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, leng = 0;

	if (filename == 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[leng])
			leng++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, leng);

	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}
