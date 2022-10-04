#include "main.h"
#include <stdlib.h>
/**
 * argstostr - It concatenates all the arguments of the program
 * @ac:number of arguments supplied to program
 * @av:array pointers to the arguments
 * Return: pointer to new string created by concat the arguments
 */
char *argstostr(int ac, char **av)
{
	int inp1, inp2, ndx = 0;
	char *conc_strg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (inp1 = 0; inp1 < ac; inp1++)
	{
		for (inp2 = 0; av[inp1][inp2]; inp2++)
			ac++;
	}

	conc_strg = malloc(sizeof(char) * ac + 1);

	if (conc_strg == NULL)
		return (NULL);

	for (inp1 = 0; inp1 < ac; inp1++)
		conc_strg[ndx++] = av[inp1][inp2];
		conc_strg[ndx++] = '\n';

	conc_strg[ac] = '\0';

	return (conc_strg);
}
