/**
 * cap_string - cambia las palabras a mayuscula
 * @str: puntero
 *
 * Return: retorna str
 */
#include "main.h"
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr != '\0')
	{
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
			*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
			*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr -= 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
		ptr++;
	}

	return (str);
}
