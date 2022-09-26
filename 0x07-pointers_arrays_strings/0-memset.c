#include "main.h"
/**
 * _memset - function that fills the first n bytes
 * of the memory area pointed by s with constant byte b
 * @s:pointing to memory to be filled
 * @b:the value to fill the memory
 * @n:number of times to fill the memory with the value @b
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ndx = 0;
	char *storeMem = s, i_value = b;

	for (ndx < n)
	{
		storeMem[ndx] = i_value;
		ndx++;

	}
	return (storeMem);
}
