#include "main.h"
/**
 * _strstr - locates a substring in a string
 * @haystack:string to be searched
 * @needle:substring to locate in @haystack
 * Return: pointer to beginning of @needle - if substring found
 * if not found - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int ndx = 0;

	while (*haystack)
	{
		if (haystack[ndx] == needle[ndx])
		{
			if (needle[ndx + 1] == '\0')
				return (haystack);
			ndx++;
		}
		haystack++;
	}
	return ('\0');
}
