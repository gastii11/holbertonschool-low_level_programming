/**
 * string_toupper - mayusculas de a - z
 * @str: puntero
 *
 * Return: retorna str
 */
#include "main.h"
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
