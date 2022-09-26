#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s:string searched
 * @c:characer searched
 * Return: if character found - pointer s
 * if not - NULL
 */
char *_strchr(char *s, char c)
{
	int ndx;

	for (ndx = 0; s[ndx] >= '\0'; ndx++)
	{
		if (s[ndx] == c)
			return (s + ndx);
	}
	return ('\0');
}
