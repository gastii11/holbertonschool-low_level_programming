#include "main.h"
#include <stdio.h>
/**
 * set_bit - Establece el valor de un bit en 1 en un índice dado.
 * @n: Puntero al número que se modificará.
 * @index: Índice del bit que se establecerá (empezando desde 0).
 *
 * Return: 1 si funcionó, o -1 si se produjo un error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
