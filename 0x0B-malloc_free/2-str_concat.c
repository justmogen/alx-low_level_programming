#include "main.h"
#include <stdio.h>
/**
 * str_concat - concatenating two strings
 * @s1:string where s2 is attached
 * @s2:string to concat to s1
 * Return: if NULL-empty string, if it fails=NULL
 *		else newly allocated space containing the two string
 */
char *str_concat(char *s1, char *s2)
{
	int len, ret1, ret2;
	char *str_conc;

	if (s1 == NULL)
		ret1 = 0;
	else
		for (ret1 = 0; s1[ret1]; ret1++)
			;

	if (s2 == NULL)
		ret2 = 0;
	else
		for (ret2 = 0; s2[ret2]; ret2++)
			;

	str_conc = malloc(sizeof(char) * (ret1 + ret2 + 1))

	if (str_conc == NULL)
		return (NULL);

	for (len = 0; len < ret1; len++)
		str_conc[len] = s1[len];

	for (len = 0; len < ret2; len++)
		str_conc[len + ret1] = s2[len];

	str_conc[ret1 + ret2] = '\0';

	return (str_conc);
}
