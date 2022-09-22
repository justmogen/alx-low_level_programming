#include "main.h"
/**
 * leet - encode the given string to 1337 style
 * @s:string that is encoded
 * Return: encoded string pointer
 */
char *leet(char *s)
{
	int i, i2;
	char elet[8] = {'A', '?', 'E', 'O', '?', 'T', '?', 'L'};

	for (i = 0; s[i]; i++)
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (s[i] == elet[i2] ||
			    s[i] - 32 == elet[i2])
				s[i] = i2 + '0';
		}
	}
	return (s);
}
