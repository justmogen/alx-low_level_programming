#include <stdio.h>
/**
*main - Prints char using putchar
*
*void print - function that prints the strings using putchar by incrementing the strings untill the end is reached
*Return: returns 0 success
*/
int main(void)
{
char str[8] = "_putchar";
int s;

for(s = 0; s < 8; s++)
{
_putchar(str[s]);
}
_putchar('\n');
return (0);
}
