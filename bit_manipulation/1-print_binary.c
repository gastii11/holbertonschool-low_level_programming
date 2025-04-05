#include <stdio.h>
#include "main.h"
/**
 * print_binary - Imprime la representación binaria de un número.
 * @n: Número entero sin signo a convertir.
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit_activo = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			bit_activo = 1;
			_putchar('1');
		}
		else if (bit_activo)
		{
			_putchar('0');
		}
	}

	if (!bit_activo)
		putchar('0');


}
