/**
 * str_concat - funcion
 * @s1: cadena
 * @s2: cadena
 *
 * Return: retorna result
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s2[i];
	}

	for (i = 0; i < len2; i++)
	{
		result[len1 + i] = s2[i];
	}

	return (result);
}
