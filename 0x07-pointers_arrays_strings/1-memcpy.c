#include "main.h"
/**
 * _memcpy - copies n bytes from memory area @src to memory @dest area
 * @dest:destination pointer
 * @src:source of strings to copy to @dest
 * @n:number of bytes to copy
 * Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n_times = 0;
	char *destin = dest, *source = src;

	while (n_times < n)
	{
		destin[n_times] = source[n_times];
		n_times++;
	}
	return (dest);
}

