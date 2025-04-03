#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_s - Nodo de una lista enlazada
 * @str: Cadena de caracteres (string)
 * @len: Longitud de la cadena
 * @next: Apuntador al siguiente nodo de la lista
 *
 * Descripción: Estructura para representar los nodos de una lista
 * enlazada simple en C.
 */
typedef struct list_s
{
	char *data_ptr;
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* LISTS_H */
