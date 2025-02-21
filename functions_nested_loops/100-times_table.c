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
	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", i * j);
			}
		}
		printf("\n");
	}
}
