#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - funcion
 * @n: entero
 *
 * Return: retorna sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}


	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
