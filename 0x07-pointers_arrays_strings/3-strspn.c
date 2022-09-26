#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s:string segment to be scanned
 * @accept:list of character to match @s
 * Return:number of bytes contained in @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int ndx = 0;
	unsigned int return_chrc = 0;

	while (*s)
	{
		while (accept[ndx])
		{
			if (*s == accept[ndx])
			{
				return_chrc++;
				break;
			}
			else if (accept[ndx + 1] == '\0')
			{
				return (return_chrc);
			}
			ndx++;
		}
		s++;
	}
	return (return_chrc);
}
