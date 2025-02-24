/**
 * more_numbers - imprime 10 veces
 *
 * Descripcion: imprime 10 veces de 0 al 14
 * Return: retorna 0
 */
#include "main.h"

void more_numbers(void)
{
	int n, g;

	for (n = 0; n < 10; n++)
	{
		for (g = 0; g < 15; g++)
		{
			if (g >= 10)
			{
				_putchar('0' + (g / 10));
			}
			{
				_putchar('0' + (g % 10));
			}
		}
		_putchar('\n');
	}
}
