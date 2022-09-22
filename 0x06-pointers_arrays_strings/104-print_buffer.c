#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints the buffer 10 bytes at a time in each line
 * starting the hex numbers then show displayable characters
 * @b:buffer to be printed
 * @size:number of bytes to be printed from buffer
 */
void print_buffer(char *b, int size)
{
	int Bt, ndx;

	for (Bt = 0; Bt < size; Bt += 10)
	{
		printf("%08x: ", Bt);

		for (ndx = 0; ndx < 10; ndx++)
		{
			if ((ndx + Bt) >= size)
			{
				printf(" ");
			}
			else
			{
				printf("%02x", *(b + ndx + Bt));
			}
			if ((ndx % 2) != 0 && ndx != 0)
			{
				printf(" ");
			}
		}
		for (ndx = 0; ndx < 10; ndx++)
		{
			if ((ndx + Bt) >= size)
			{
				break;
			}
			else if (*(b + ndx + Bt) >= 31
				 && *(b + ndx + Bt) <= 126)
			{
				printf("%c", *(b + ndx + Bt));
			}
			else
				printf(".");
		}
		if (Bt >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
