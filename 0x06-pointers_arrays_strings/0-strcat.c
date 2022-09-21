#include "main.h"
/**
 * _strcat - append the @src string to the end of @dest string
 * @dest:string where the src string is appended to
 * @src:string to be appended to dest
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int ndx = 0;

	int leng.d = 0;

	while (dest[ndx++])
	{
		leng.d++;
	}
	for (ndx = 0; src[ndx]; ndx++)
	{
		dest[leng.d] = src[ndx];
	}
	return (dest);
}
