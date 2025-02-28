/**
 * _strncpy - copiado
 * @dest: puntero
 * @src: puntero
 * @n: variable
 *
 * Return: dest
 */
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{

		dest[i] = '\0';
	}
	return (dest);
}
