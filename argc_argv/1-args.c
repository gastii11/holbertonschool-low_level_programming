/**
 * main - funcion
 * @argv: vector de argumentos
 * @argc: recuentro de argumento
 * Return: retorna 0
 */
#include "main.h"
#include <stdio.h

int main(int argc, char *argv[] __attribute__((unused)))
{
	int num_arguments;

	num_arguments = argc - 1;
	printf("%d\n", num_arguments);

	return (0);
}
