#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s:string to be capitalized
 * Return: changed string pointer
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))

			i++;
		}
		if (s[i - 1] == ' ' ||
		    s[i - 1] == '\t' ||
		    s[i - 1] == '\n' ||
		    s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}' ||
		    i == 0)
			s[i] -= 32;
	}
	return (s);
}
