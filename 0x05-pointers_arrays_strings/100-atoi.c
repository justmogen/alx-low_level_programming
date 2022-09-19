#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: converted string
 */
int _atoi(char *s)
{
	int sgn = 1;
	unsigned int mbr = 0;

	do {
		if (*s == '-')
		{
			sgn = sgn * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			mbr = (mbr * 10) + (*s - '0');
		}
		else if (mbr > 0)
		{
			break;
		}
		} while (*s++);

	return (mbr * sgn);
}
