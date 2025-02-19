/**
 * print_sign - chequea signo
 * @n: el numero que va a chequear
 *
 * Return: 1 positivo 0 cero -1 negativo
 */
#include "main.h"
#include <stdio.h>

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

	return (0);
}
