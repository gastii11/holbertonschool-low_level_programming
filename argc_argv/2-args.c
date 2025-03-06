/**
 * main - funcion
 * @argv: vector de argumentos
 * @argc: recuentro de argumento
 * Return: retorna 0
 */
#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
