/*
 * _isupper - es mayuscula
 *
 * Description: si c es mayor a A retorna 1 y si es menor retorn 0
 * Return: return 1 si es es, return 0 en lo contario
 */
#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
