#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array suing malloc
 * @nmemb:array to get memory
 * @size:bytes to be allocated
 *
 * Return:Pointer to allocated memory else NULL if it fails
 * if nmemb/size is 0, _calloc returns NULL
 * memory is set to start at 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int ndx;
	void *space;
	char *memory;

	if (size == 0 || nmemb == 0)
		return (NULL);

	space = malloc(size * nmemb);
	if (space == NULL)
		return (NULL);

	memory = space;

	for (ndx = 0; ndx < (size * nmemb); ndx++)
	{
		memory[ndx] = '\0';
	}
	return (space);
}
