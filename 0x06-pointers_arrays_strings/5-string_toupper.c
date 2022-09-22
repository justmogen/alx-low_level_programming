#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s:string that is changed
 * Return: changed string pointer
 */
char *string_toupper(char *s)
{
	int indx;

	for (indx = 0; s[indx]; indx++)
	{
		if (s[indx] >= 'a' && s[indx] <= 'z')
		{
			s[indx] -= 32;
		}
	}
	return (s);
}
