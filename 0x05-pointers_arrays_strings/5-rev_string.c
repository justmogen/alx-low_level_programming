#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input parameter
 * Return: reversed string
 */
void rev_string(char *s)
{
	int c, rvs = 0;
	char count;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	for (c = (c - 1); rvs < c; rvs++)
	{
		count = s[c];
		s[c] = s[rvs];
		s[rvs] = count;
		c--;
	}
}
