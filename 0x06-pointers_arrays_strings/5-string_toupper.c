#include "main"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @str:string that is changed
 * Return: changed string pointer
 */
char *string_toupper(char *)
{
	int indx;

	for (indx = 0; *[indx]; indx++)
	{
		if (*[indx] >= 'a' && *[indx] <= 'z')
		{
			*[indx] -= 32;
		}
	}
	return (*);
}
