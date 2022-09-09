#include <stdio.h>
/**
*main - printing base 16 in lowercase with putchar
*Return: 0 success
*/
int main(void)
{
int tt = '0';
while (tt <= '9')
{
putchar(tt);
tt++;
}
char pp = 'a';
while ( pp <= 'f')
{
putchar(pp);
pp++;
}
putchar('\n');
return (0);
}
