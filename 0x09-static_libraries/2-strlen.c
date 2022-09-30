#include "main.h"
/**
 * _strlen - function that prints the length of a string
 * @s: input
 * Return: length of the input
 */
int _strlen(char *s)
{
	int lps = 0;

	while (*s != '\0')
	{
		lps++;
		s++;
	}
	return (lps);
}
