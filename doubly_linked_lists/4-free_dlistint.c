#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Libera una lista doblemente enlazada
 * @head: Puntero al inicio de la lista
 *
 * Retorno: Nada
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
