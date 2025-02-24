#include "main.h"
/**
 * _isdigit - digito del 0 al 9
 *@c: caracter
 *
 * Return: retorna 1 o 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
