/**
 * _strstr - funcion
 * @haystack: cadena
 * @needle: subcadena
 *
 * Return: retorna nulo
 */
#include "main.h"
char *_strstr(char *haystack, char *needle)
{


	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return ('\0');
}
