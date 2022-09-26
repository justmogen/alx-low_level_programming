#include "main.h"
/**
 * _strpbrk - searches string @s for any occurrence of bytes in @accept
 * @s:string to be searched
 * @accept:bytes to be searched for
 * Return: pointer to byte in s - if byte found in @accept
 * or null if byte in @accept not found
 */
char *_strpbrk(char *s, char *accept)
{
	int ndx;
	char *str = s;

	while (*str)
	{
		for (ndx = 0; accept[ndx]; ndx++)
		{
			if (*str == accept[ndx])
			{
				return (str);
			}
		}
		str++;
	}
	return ('\0');
}
