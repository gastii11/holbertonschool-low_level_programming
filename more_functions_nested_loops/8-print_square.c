/**
 * print_square - cuadrado
 * @size: lados del cuadrado
 *
 * Return: retorna un cuadrado
 */
#include "main.h"
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
