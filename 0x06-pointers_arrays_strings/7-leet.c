#include "main.h"
/**
 * leet - encode the given string to 1337 style
 * @s:string that is encoded
 * Return: encoded string pointer
 */
char *leet(char *s)
{
	int i, i2;
	char elet[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (i2 = 0; i2 <= 9; i2++)
		{
			if (elet[i2] == s[i])
				s[i] = leet[i2];
		}
	}
	return (0);
}
