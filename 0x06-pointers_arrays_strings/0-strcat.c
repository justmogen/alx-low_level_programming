#include "main.h"
/**
 * _strcat - append the @src string to the end of @dest string
 * @dest:string where the src string is appended to
 * @src:string to be appended to dest
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int ndx = 0, leng = 0;

	while (dest[ndx++])
	{
		leng++;
	}
	for (ndx = 0; src[ndx]; ndx++)
	{
		dest[leng++] = src[ndx];
	}
	return (dest);
}
