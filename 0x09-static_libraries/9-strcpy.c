#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest:here is where src is copied
 * @src:the source
 * Return: pointing to dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
