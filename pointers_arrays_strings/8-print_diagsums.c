/**
 * print_diagsums - funcion
 * @a: puntero
 * @size: caracter
 *
 */
#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i = 0;
	int suma1 = 0;
	int suma2 = 0;

	for (i = 0; i < size; i++)
	{
		suma1 += a[i * size + i];
		suma2 += a[i * size + (size - 1 - i)];

