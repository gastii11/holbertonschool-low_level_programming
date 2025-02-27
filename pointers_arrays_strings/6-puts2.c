/**
 * puts2 - cadena cada dos caracteres
 * @str: variable
 *
 * Return: retorna 0
 */
#include "main.h"

void puts2(char *str)
{
	int i;

	if (str == ('\0'))
		return;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
