/**
 * _strcpy - copia la cadena
 * @dest: puntero
 * @src: puntero
 *
 * Return: dest
 */
#include "main.h"
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
