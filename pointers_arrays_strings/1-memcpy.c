/**
 * _memcpy - funcion
 * @dest: destino
 * @scr: origen
 * @n: variable
 *
 * Return: retorna dest
 */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
