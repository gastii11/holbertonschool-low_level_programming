/**
 * print_numbers - numeros
 *
 * Descripsion: numeor del 0 al 9
 * Return: retorna 0
 */
#include "main.h"
#include <unistd.h>

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
