#include <stdlib.h>
#include "main.h"
/**
 * create_array - funcion
 * @size: array
 * @c: caracter
 *
 * Return: Un puntero a la matriz, o NULL si falla o si el tamañ es 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
