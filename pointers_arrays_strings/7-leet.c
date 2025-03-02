/**
 * leet - cambio de letras a numeoros
 * @str: puntero
 *
 * Return: retorna str
 */
#include "main.h"
char *leet(char *str)
{
	char leet_chars[] = "aAeEoOtTLl";
	char leet_replacements[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
			}
			break;

		}
	}
	return (str);
}
