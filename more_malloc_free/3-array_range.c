#include "main.h"
#include <stdlib.h>
/**
 * array_range - funcion
 * @min: minimo
 * @max: maximo
 *
 * Return: retorna array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}


	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
