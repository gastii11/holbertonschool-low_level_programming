#include "main.h"
/**
 * clear_bit - Establece en 0 el valor de un bit en un índice dado.
 * @n: Puntero a un número entero sin signo.
 * @index: Índice del bit a modificar, empezando desde 0.
 *
 * Return: 1 si la operación fue exitosa, -1 en caso de error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
