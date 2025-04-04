#include "lists.h"
#include <stdlib.h>
/**
 * borrar_nodo_en_índice - Borra el nodo en un índice específico de una lista.
 * @cabeza: Doble puntero a la lista enlazada.
 * @índice: Índice del nodo a borrar, empezando desde 0.
 *
 * Return: 1 si tuvo éxito, -1 si falló.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	else
		*head = temp->next;
	
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
