#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings using max number of inputted bytes
 * @s1:1st input string
 * @s2:second string
 * @n:max number of bytes to concatenate from s2 to s1
 *
 * Return: pointer to concatenated memory else NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l = n, ndx, l2 = 0;
	char *conc;

	if (s1 == NULL || s2 == NULL)
		s1 == "";

	for (ndx = 0; s1[ndx]; ndx++)
	{
		l++;
	}
	conc = malloc(sizeof(char) * l + 1);

	if (conc == NULL)
		return (NULL);

	for (ndx = 0; s1[ndx]; ndx++)
		conc[l2++] = s1[ndx++];

	for (ndx = 0; ndx < n && s2[ndx]; ndx++)
		conc[l2++] = s2[ndx];
	/**
	 * ndx < n: copies the specified number of bytes to the s1 string
	 * (a part of the string) and locates the required space in memory
	 */

	conc[l2] == '\0';
	return (conc);
}
