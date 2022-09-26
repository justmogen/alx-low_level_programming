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
	int ndx = 0;

	while (s[ndx] >= '\0')
	{
		if (s[ndx] == c)
			return (s + ndx);
	}
	ndx++;
	return (s);
}
