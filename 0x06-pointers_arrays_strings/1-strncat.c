#include "main.h"
/**
 * _strncat - append two strings using n bytes from src
 * @dest:where string is concateneted
 * @src:string that is appended to dest
 * @n:number of bytes to append from @src to @dest
 * Return: pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x++])
	{
		y++;
	}
	if (x = 0; x < n && src[x]; x++)
	{
		dest[y++] = src[x];
	}
	return (dest);
}i
