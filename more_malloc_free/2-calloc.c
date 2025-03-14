#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - funcion
 * @nmemb: entero
 * @size: entero
 *
 * Return: retorna ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *char_ptr;
	void *ptr;
	unsigned int total_size, i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	char_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
	{
		char_ptr[i] = 0;
	}

	return (ptr);
}
