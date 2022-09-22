#include "main"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @str:string that is changed
 * Return: changed string pointer
 */
char *string_toupper(char *str)
{
	int indx;

	for (indx = 0; str[indx]; indx++)
	{
		if (str[indx] >= 'a' && str[indx] <= 'z')
		{
			str[indx] -= 32;
		}
	}
	return (str);
}
