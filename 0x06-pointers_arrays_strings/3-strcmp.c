#include "main.h"
/**
 * _strcmp - compare two strings in pointers
 * @s1:first string to be compared
 * @s2:second string in pointer to be compared
 * Return: 0 if s1 == s22, negative if s1 < s2, positive difference if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
do
{
	s1++;
	s2++;
}
while (*s1 == *s2);
return (*s1 - *s2);
}
