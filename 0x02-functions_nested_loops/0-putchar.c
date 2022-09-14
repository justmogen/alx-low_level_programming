#include <unistd.h>
#include "main.h"
/**
*main - Prints char using putchar
*
*Description:  function that prints the strings using _putchar by incrementing the strings untill the end is reached
*Return: returns 0 success
*/
int main(void)
{
	char c[8] = "_putchar";

	int s;

	for (s = 0;  s < 8; s++)
	{
		_putchar(c[s]);
	}
	_putchar('\n');
	return (0);
}
int _putchar(char c) 
 { 
         return (write(1, &c, 1)); 
 }
