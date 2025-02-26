/**
 * _strlen - cadena
 * @s: caracter
 *
 * Return: retorna i
 */
#include "main.h"
int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c += 1;
	}
	return (c);

}
