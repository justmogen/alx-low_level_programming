#include "main.h"
/**
 * _strncpy - copy specified number of bytes from string @src to @dest
 * @src:source string
 * @dest:where string from  @src is copied
 * @n:number of bytes to be copied from @src
 * Return: pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
