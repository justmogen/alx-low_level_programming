#include <stdio.h>
/**
*main - printing all possible combinations of single-digit numbers
*Return: 0 success
*/
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
++1;
}
putchar('\n');
return (0);
}
