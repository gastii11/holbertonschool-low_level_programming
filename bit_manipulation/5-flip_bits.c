#include "main.h"
/**
 * flip_bits - Cuenta el número de bits que se deben cambiar
 * para convertir un número en otro.
 * @n: Primer número.
 * @m: Segundo número.
 *
 * Return: Número de bits a voltear.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
