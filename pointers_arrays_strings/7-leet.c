/**
 * leet - cambio de letras a numeoros
 * @str: puntero
 *
 * Return: retorna str
 */
#include "main.h"
char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet_map[i] != '\0'; i++)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replace[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
