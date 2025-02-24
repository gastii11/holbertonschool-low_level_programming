#include "main.h"

/**
 * _isupper - muetras mayusculas
 * @c: es el caracter
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
