int _strlen(char *str)
{
	int i = 0;

	(void) str;

	while (str[i] != '\0')
		i++;
	return i;
}	



/**
 * string_nconcat - funcion
 * @s1: cadena
 * @s2: cadena
 * @n: entero
 *
 * Return: retorna result
 */
#include "main.h"
#include <stdlib.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[len1 + j] = s2[j];
	result[len1 + n] = '\0';
	
	return (result);
}

