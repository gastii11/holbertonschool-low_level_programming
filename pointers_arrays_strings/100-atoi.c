/**
 * _atoi - cadena a entero
 * @s: puntero
 *
 * Return: retorna num * sing
 */
#include "main.h"
int _atoi(char *s)
{
	int sing = 1;
	unsigned int num = 0;
	int digit_found = 0;

	while (*s)
	{
		if (*s == '-')
			sing *= -1;
		else if (*s >= 0 && *s <= 9)
		{
			num = num * 10 + (*s - 0);
			digit_found = 1;
		}
		else if (digit_found)
			break;
		s++;
	}

	return (num * sing);
}
