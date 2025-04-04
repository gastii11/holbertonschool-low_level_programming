#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Añade un nuevo nodo al final de una lista dlistint_t
 * @head: Doble puntero a la cabeza de la lista
 * @n: Dato que contiene el nuevo nodo
 *
 * Return: Dirección del nuevo nodo, o NULL si falla
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n= n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{	
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
