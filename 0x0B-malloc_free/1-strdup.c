#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly
 * 		allocated space in memory which contains a copy of 
 * 		the string given as a parameter
 * @str:pointer to string
 * Return: pointer to thee duplicated string else
 * 		 NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;

	int ndx;


	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(char) * (strlen + 1));

	if (dup == NULL)
		return (NULL);
	for (ndx = 0; str[ndx]; ndx++)
		dup[ndx] = str[ndx];
	dup[strlen] = '\0';
	return (dup);
}
	
