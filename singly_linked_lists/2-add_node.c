#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - añade un nuevo nodo al principio de una lista
 * @head: doble puntero al inicio de la lista
 * @str: string a duplicar y añadir al nuevo nodo
 *
 * Return: dirección del nuevo nodo o NULL si falla
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
