#include "lists.h"

/**
 * dlistint_len - Devuelve el número de elementos en una lista dlistint_t
 * @h: Puntero a la cabeza de la lista
 *
 * Return: Número de elementos en la lista
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		contador++;
		h= h->next;
	}

	return (contador);
}
