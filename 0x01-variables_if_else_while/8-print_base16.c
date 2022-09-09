#include <stdio.h>
/**
*main - printing base 16 in lowercase with putchar
*Return: 0 success
*/
int main(void)
{
char t = '0';
while (t <= '9')
{
putchar(t);
t++;
}
char p = 'a';
while ( p <= 'f')
{
putchar(p);
p++;
}
putchar('\n');
return (0);
}
