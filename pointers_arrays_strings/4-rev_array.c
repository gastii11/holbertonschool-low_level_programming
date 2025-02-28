/**
 * reverse_array - invierte un contenido
 * @a: puntero
 * @n: variable
 *
 * Return: retorna 0 
 */
#include "main.h"
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++;)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
