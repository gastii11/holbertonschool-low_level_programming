#include "lists.h"
#include <stdlib.h>
/**
 * suma_dlistint - Calcula la suma de los datos (n) en una lista enlazada
 * @head: Puntero al inicio de la lista
 *
 * Return: La suma de todos los datos en la lista, o 0 si está vacía
 */
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;
	dlistint_t *actual = head;

	while (actual != NULL)
	{
		suma += actual->n;
		actual = actual->next;
	}

	return (suma);
}
