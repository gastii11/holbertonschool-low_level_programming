#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserta un nuevo nodo en una posición dada
 * @h: Doble puntero a la cabeza de la lista
 * @idx: Índice donde se añadirá el nuevo nodo, empieza en 0
 * @n: Dato para el nuevo nodo
 *
 * Return: Dirección del nuevo nodo, o NULL si falla
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL || (temp->next == NULL && idx != i + 1))
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
