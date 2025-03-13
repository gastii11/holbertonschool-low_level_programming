/**
 * malloc_checked - funcion
 * @b: entero
 *
 * Return: retorna ptr
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
