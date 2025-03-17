#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - devuelve la suma de a y b
 * @a: primer número entero
 * @b: segundo número entero
 *
 * Return: suma de a y b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - devuelve la diferencia entre a y b
 * @a: primer número entero
 * @b: segundo número enter
 *
 * Return: diferencia entre a y b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - devuelve el producto de a y b
 * @a: primer número enter
 * @b: segundo número enter
 *
 * Return: producto de a y b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devuelve el resultado de la división de a entre 
 * @a: primer número enero
 * @b: segundo número enter
 *
 * Return: división de a entre 
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 * op_mod - devuelve el resto de la división de a entreb
 * @a: primer número enter
 * @b: segundo número enter
 *
 * Return: resto de la divisiónde a entre b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
