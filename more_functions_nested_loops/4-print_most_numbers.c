/**
 * print_most_numbers - imprime numeros
 *
 * Description: no imprime 2 y 4
 * Return: retorna 0
 */
#include "main.h"

void print_most_numbers(void)
{
	int n = 0;
		while (n < 10)
		{
			if (n != 2 && n != 4)
			{
				_putchar(n + '0');
			}
			n++;
		}
	_putchar('\n');
}
