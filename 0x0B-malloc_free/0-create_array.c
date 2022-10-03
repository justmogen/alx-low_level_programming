#include "main.h"
/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size:size to be initialized
 * @c:chosen char to initialize the array with
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int ndx = 0;
	char *i_arr;

	if (size == 0)
	{
		return (NULL);
	}

	i_arr = malloc(sizeof(char) * size);

	while (ndx < size)
		i_arr[ndx] = c;
		ndx++;
	return (0);
}
