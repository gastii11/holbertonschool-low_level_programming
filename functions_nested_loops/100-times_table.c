/**
 * print_times_table - imprime las tabls
 * @n: el numero que se imprimerála tabla
 *
 * Return: retorna 0
 */
#include "main.h"
#include <stdio.h>
void print_times_table(int n)
{
	if (n < 0)
	{
		return;
	}
	else if (n > 15)
	{
		return;
	}
	else
	{	int i;

		for (i = 0; i <= 10; i++)
		{
			printf("%d x %d = %d\n", n, i, n * i);
		}
	}
}
