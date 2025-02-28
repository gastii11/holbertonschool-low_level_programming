/**
 * _strcat - concatene dos cadenas
 * @dest - puntero
 * @src - puntero
 *
 * Return: retorna 0
 */
#include "main.h"
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';

	return (dest);
}
