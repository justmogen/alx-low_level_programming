#include "main.h"
#include <stdlib.h>
/**
 * count_wrd - Will count the number of words contained in a string
 * @strg:input string to be checked
 * Return: number of words is the string
 */
int count_wrd(char *strg)
{
	int ndx, strn = 0;

	for (ndx = 0; strg[ndx]; ndx++)
	{
		if (strg[ndx] == ' ')
		{
			if (strg[ndx + 1] != ' ' && strg[ndx + 1] != '\0')
				/**
				 *checks if next index is not a whitespace &&
				 *not the end of the string/null byte
				 *
				 */
				strn++;
		}
		else if (ndx == 0)
			strn++;
	}
	strn++;

	return (strn);
}
/**
 * strtow - splits the string into words
 * @str: string to split
 *
 * Return: NULL if str==NULL or  string=' ' else pointer to the array of words
 */
char **strtow(char *str)
{
	char **words;
	int ndx, ndx2, wordc = 0, w = 0, w2, i;

	if (str == NULL || *str == '\0')
		return (NULL);
	wordc = count_wrd(str);
	if (wordc == 1)
		return (NULL);

	words = malloc(sizeof(char *) * (wordc + 1));
	if (words == NULL)
		return (NULL);
	words[wordc - 1] = NULL;
	while (str[ndx])
	{
		if (str[ndx] != ' ' && (ndx == 0 || str[ndx - 1] == ' '))
		{
			for (ndx2 = 1; str[ndx + ndx2] != ' ' && str[ndx + ndx2]; ndx2++)
				;
			ndx2++;
			words[w] = malloc(sizeof(char) * ndx2 + 1);
			ndx2--;
			if (words[w] == NULL)
			{
				for (w2 = 0; w2 < w; w2++)
					free(words[w2]);
				free(words[wordc - 1]);
				free(words);
				return (NULL);
			}
			for (i = 0; i < ndx2; i++)
				words[w][i] = str[ndx + i];
			words[w][i] = '\0';
			w++;
			ndx += ndx2++;
		}
		else
			ndx++;
	}
	return (words);
}
