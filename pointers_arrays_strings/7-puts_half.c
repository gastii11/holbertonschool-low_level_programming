/**
 * puts_half - mitad de una cadena
 * @str: puntero
 *
 * Return: retorna 0
 */
#include "main.h"
void puts_half(char *str)
{
	int i;
	int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
	

	if (leng % 2 == 0)
	{
		i = leng / 2;
	}

	else
	{
		i = (leng + 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
