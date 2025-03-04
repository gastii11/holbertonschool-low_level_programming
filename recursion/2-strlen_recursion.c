/**
 * _strlen_recursion - funcion
 * @s: puntero
 *
 * Return: retorna 1 + recursion
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
