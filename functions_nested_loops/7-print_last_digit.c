/**
 * print_last_digit - imprime el ultimo numero
 * @n: es el numero que va a chequear
 *
 * Return: abs(n) %10.
 */
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	_putchar(last_digit + '0');

	return (last_digit);
}
