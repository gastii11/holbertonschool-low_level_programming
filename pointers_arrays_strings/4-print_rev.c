/**
 * print_rev - cadena inversa
 * @s: caacter
 *
 * Return: retorna cadena inversa
 */
#include <stdio.h>
#include <string.h>
#include "main.h"

void print_rev(char *s)
{
	int l = strlen(s);
	int i;

	if (s == NULL)
	{
		return;
	}

	for (i = l - 1; 1 >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
