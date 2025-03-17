#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - funcion
 * @array: Puntero
 * @size: Tama√
 * @cmp: Puntero
 *
 * Return: -1 si no se encuentra
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
