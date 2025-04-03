#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Imprime todos los elementos de una lista dlistint_t
 * @h: Puntero a la cabecera de la lista
 *
 * Return: Número de nodos en la lista
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		contador++;
		h = h->next;
	}

	return (contador);
}
