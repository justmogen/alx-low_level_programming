#include <stdio.h>
/**
*main - print lowercase in reverse with putchar
*Return: 0 success
*/
int main(void)
{
char letr = 'z';
while (letr >= 'a')
{
putchar(letr);
letr--;
}
putchar('\n');
return (0);
}
