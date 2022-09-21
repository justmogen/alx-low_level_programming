#include "main.h"
/**
 * _strcat - append the @src string to the end of @dest string
 * @dest:string where the src string is appended to
 * @src:string to be appended to dest
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, const char *src)
{
	int ndx = 0;
	int leng = 0;

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
