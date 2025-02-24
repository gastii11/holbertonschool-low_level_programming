/**
 * print_numbers - numeros
 *
 * Descripsion: numeor del 0 al 9
 * Return: retorna 0
 */
#include "main.h"
#include <stdio.h>
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
