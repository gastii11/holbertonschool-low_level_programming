/**
 * _strcmp - compara dos cadenas
 * @s1: puntero
 * @s2: puntero
 *
 * Return: comparacion de s1 y s2
 */
#include "main.h"
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0'  && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
