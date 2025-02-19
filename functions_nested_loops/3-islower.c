/**
 * _islower - muestra si esta en minuscula
 * @c: parametro c
 *
 * Description: muestra 1 si c es minuscula si no muestra 0
 * Return: retorna 0
 */
#include <stdio.h>
#include "main.h"
#include <ctype.h>

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
