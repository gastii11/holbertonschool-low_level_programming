#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - imprime nombre
 * @name: puntero
 * @f: puntero
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
