#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:pointer to previously allocated memory with a call to malloc
 * @old_size:size in bytes of allocated space for ptr
 * @new_size:new size in bytes for new memory block
 *
 * contents will be copied in new allocated memory space,starting from ptr
 * upto minimum of old and new size
 * Return:pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int ndx;
	void *space;
	char *cp_p = ptr;

	/**
	 *do nothing and return the previous memory-ptr
	 */
	if (new_size == old_size)
		return (ptr);
	/**
	 * if the ptr=NULL, then the call is equivalent to malloc(new_size)
	 */
	if (ptr == NULL)
	{
		space = malloc(new_size);
		if (space == NULL)
			return (NULL);

		return (space);
	}
	/**
	 * checking size of memory block of ptr-(cp_p) to reallocate to new_size
	 */
	space = malloc(sizeof(*cp_p) * new_size);
	/**
	 *if previous block of memory has some values and new_size is 0 >> free(otr)
	 */
	if (space == NULL)
		free(ptr);
		return (NULL);

	for (ndx = 0; ndx < new_size && ndx < old_size; ndx++)
	{
		space[ndx] = *cp_p++;
	}
	free(ptr);
	return (space);
}
