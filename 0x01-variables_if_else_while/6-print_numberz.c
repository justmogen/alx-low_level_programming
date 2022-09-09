#include <stdio.h>
/**
*main - use putchar to print 0-9
*Return: 0 success
*/
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
