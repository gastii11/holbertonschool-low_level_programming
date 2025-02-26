/**
 * _puts - cadena
 * @str: puntero
 */
#include "main.h"
#include <stdio.h>
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
		}
		_putchar('\n');
	}
}
