#include <stdio.h>
/**
*main - printing lowercaser and uppercase
*Return : 0 on succession
*/
int main(void)
{
char t = 'a';
char T = 'A';
while (t <= 'z')
{
putchar(t);
t++;
}
while (T <= 'Z')
{
putchar(T);
T++;
}
putchar('\n');
return (0);
}
