/**
 * _abs - numero absoluto
 * @n: numero que chequea
 *
 * Return: numero asoluto
 */
#include <stdio.h>
#include "main.h"
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
