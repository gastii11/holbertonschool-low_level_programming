#include "main.h"
/**
 * binary_to_uint - Convierte un número binario en un unsigned int.
 * @b: Puntero a una cadena de caracteres '0' y '1'.
 * 
 * Return: El número convertido, o 0 si:
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	
	num = 0;
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = (num * 2) + (b[i] - '0');
	}
	
	return (num);
}
