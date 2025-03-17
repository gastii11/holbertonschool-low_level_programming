#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - funcion
 * @array: puntero
 * @size: tama√o
 * @action: puntero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
