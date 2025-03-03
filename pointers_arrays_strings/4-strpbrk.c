/**
 * _strpbrk - funcion
 * @s: cadena
 * @accept: cadena
 *
 * Return: retorna NULL
 *
 */
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; j++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
