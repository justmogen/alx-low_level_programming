#include <stdio.h>
/**
*main - printing base 16 in lowercase with putchar
*Return: 0 success
*/
int main(void)
{
int t = '0';
while (t <= '9')
{
putchar(t);
t++;
}
t = 'a';
while (t <= 'f')
{
putchar(t);
t++;
}
putchar('\n');
return (0);
}
