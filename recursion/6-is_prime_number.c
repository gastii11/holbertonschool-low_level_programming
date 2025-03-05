/**
 * helper - funcion auxiliar
 * @n: variable
 * @i: variable
 * Return: retorna n, i +1
 */
#include "main.h"
int helper(int n, int i)
{
	if (i * i > n)
		return (0);
	if (n % i == 0)
		return (1);
	return (helper(n, i + 1));
}

/**
 * is_prime_number - funcion
 * @n: variable
 * Return: retorna n, 2
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!helper(n, 2));
}
