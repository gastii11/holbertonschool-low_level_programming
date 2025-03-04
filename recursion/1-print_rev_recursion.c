/**
 * _print_rev_recursion - funcion
 * @s: puntero
 *
 * Return: retorna 0
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
