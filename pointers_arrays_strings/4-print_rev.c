/**
 * print_rev - cadena inversa
 * @s: caacter
 *
 * Return: retorna cadena inversa
 */

#include "main.h"
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
