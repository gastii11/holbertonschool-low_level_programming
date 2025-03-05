/**
 * _sqrt_helper - funcion auxiliar
 * @n: variable
 * @x: variable
 * 
 * Return: retorna n, x + 1
 */
#include "main.h"
int _sqrt_helper(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
    if (x * x == n)
    {
	    return (x);
    }
    return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - funcion
 * @n: variable
 *
 * Return: retorna n, 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
