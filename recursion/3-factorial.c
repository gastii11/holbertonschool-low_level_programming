/**
 * factorial - funcion
 * @n: variable
 *
 * Return: si n es igual a 0 retorna 1 y es menor retorna -1
 */
#include "main.h"
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
