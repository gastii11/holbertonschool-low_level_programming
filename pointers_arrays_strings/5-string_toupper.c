/**
 * string_toupper - cambia a mayusculas
 * @str: puntero
 *
 * Return: retorna str
 */
#include "main.h"
#include <ctype.h>
char *string_toupper(char *str)
{
	int i = 0;

	if (str[i] == '\0')
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
