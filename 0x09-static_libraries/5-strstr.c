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

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (haystack[ndx] == needle[ndx])
		{
			do {
				if (needle[ndx + 1] == '\0')
					return (haystack);
				ndx++;
			} while (haystack[ndx] == needle[ndx]);
		}
		haystack++;
	}
	return ('\0');
}
