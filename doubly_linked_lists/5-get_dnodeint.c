#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int contador = 0;
	dlistint_t *actual = head;

	while (actual != NULL)
	{
		if (contador == index)
			return (actual);
		actual = actual->next;
		contador++;
	}

	return (NULL);
}
