#include <stdio.h>
/**
*main - printing from a-z
*Return :  always 0
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}

