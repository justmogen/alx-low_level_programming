#include <stdio.h>
void print(char *str);
/**
*main - Prints char using putchar
*Return: Always 0 success
*void print - function that prints the strings using putchar by incrementing the strings untill the end is reached
*/
int main()
{
char str[] = "_putchar";
putchar(str);
putchar('\n');
return (0);
}
void print(char *str)
{
int i = 0;
while(str[i] != '\0')
{
putchar(str[i]);
i++;
}
}
