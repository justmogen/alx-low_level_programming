#include <stdio.h>
/**
*main - printing all letters except q and e
*Return: 0 on success
*/
int main(void)
{
char letr = 'a';
while (letr <= 'z')
{
if (letr != 'q' && letr != 'e')
{
putchar(letr);
}
letr++;
}
putchar('\n');
return (0);
}
