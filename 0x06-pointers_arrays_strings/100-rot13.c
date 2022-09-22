#include "main.h"
/**
 * rot13 - encoding the strings using rot13
 * @str:th string being encoded
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	int index, i2;

	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (index = 0; str[index]; index++)
	{
		for (i2 = 0; i2 < 52; i2++)
		{
			if (alpha[i2] == str[index])
			{
				str[index] = rot13[i2];
				break;
			}
		}
	}
	return (str);
}
