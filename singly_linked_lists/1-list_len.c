#include "lists.h"
/**
 * list_len - calcula el numero de elementos en una lista enlazada
 * @h: puntero a la cabeza de la lista enlazada
 *
 * Return: el numoer total de elementos de en la lista
 */
size_t list_len(const list_t *h)
{

	size_t contador = 0;

	if (h == NULL)
		return (0);
	
	while (h != NULL)
	{
		contador++;
		h = h->next;
	}
	

	return (contador);
}
