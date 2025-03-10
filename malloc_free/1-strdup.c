/**
 * _strdup - puntero
 * @str: puntero
 *
 * Return: retorna duplicar
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str)
{
	char *duplicar;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

	duplicar = malloc((i + 1) * sizeof(char));

	if (duplicar == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
		duplicar[j] = str[j];

	return (duplicar);
}
