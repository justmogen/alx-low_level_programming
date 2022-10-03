#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * and initializes it with a specific char
 * @size:size to be initialized
 * @c:chosen char to initialize the array with
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int ndx;
	char *i_arr;

	if (size == 0)
	{
		return (NULL);
	}

	i_arr = malloc(sizeof(char) * size);

	if (i_arr == NULL)
	{
		return (NULL);
	}

	for (ndx = 0; ndx < size; ndx++)
		i_arr[ndx] = c;

	return (0);
}
