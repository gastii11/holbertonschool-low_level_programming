/**
 * _strspn - funcion
 * @s: cadena
 * @accept: prefijo
 *
 * Return: retorna l
 */
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int longitud = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				longitud++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}

	return (longitud);
}
