#include <stdio.h>
/**
*main - printing lowercase and uppercase
*Return: 0 on success
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
