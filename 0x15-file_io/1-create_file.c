#include "main.h"
/**
 * create_file - creates a file
 * @filename:a pointer to name of the file to create
 * @text_content:is a NULL terminated or pointer 
 *		to string to write to the file
 * if text_content is NULL create an empty file
 * if filename is NULL return -1
 * if the file already exists, truncate it
 * Return: 1 on success, -1 on failure (file can not be created,
 *		file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------.
 *	If the file already exists, do not change the permissions.
 */
int create_file(const char *filename, char *text_content)
{
	int file, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[leng])
			leng++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, leng);

	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}
