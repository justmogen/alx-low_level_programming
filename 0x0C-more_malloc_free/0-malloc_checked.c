#include "main.h"
#include <stdlib>
/**
 * malloc_checked - allocates memory using malloc
 * @b:bytes space to be allocated
 * Return: pointer to allocated memory
 * if malloc fails the fuction to proceed with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *strng = malloc(b);
	/**
	 * the pointer to void returned by malloc is automatically converted
	 * to the correct type 
	 */
	if (strng == NULL)
	{
		exit(98);
	}
	return (strng);
}
