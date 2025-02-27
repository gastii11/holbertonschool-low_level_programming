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
	int j;
	int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
	
	if (leng == 0)
	{
		_putchar('\n');
		return;
	}

	if (leng % 2 == 0)
	{
		i = leng / 2;
	}

	else
	{
		i = (leng + 1) / 2;
	}

	for (j = i; j < leng; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
