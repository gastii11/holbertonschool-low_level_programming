#include "main.h"
#include <stdio.h>
/**
 * get_bit - Devuelve el valor de un bit en un índice dado
 * @n: Número a evaluar
 * @index: Índice del bit a obtener, empezando desde 0
 *
 * Return: Valor del bit en la posición dada o -1 si hay un error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
