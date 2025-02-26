/**
 * swap_int - intercambio de valores
 * @a: caracter
 * @b: caracter
 *
 */
#include "main.h"
void swap_int(int *a, int *b)
{

	int c = *a;
	*a = *b;
	*b = c;
}
