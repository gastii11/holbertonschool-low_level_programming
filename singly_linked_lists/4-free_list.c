#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Libera todos los nodos de una lista vinculada
 * @head: Puntero a la cabecera de la lista vinculada
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp  = head;
		head = head->next;
		free(temp);
	}
}
