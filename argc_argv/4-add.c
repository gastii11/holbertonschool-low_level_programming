/**
 * is_number - funcion
 * @str: cadena
 *
 * Return: retorna 1
 */
#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int is_number(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * main - funcion
 * @argc: Número de argumentos
 * @argv: Array de punteros a los argumentos
 *
 * Return: 0 si tiene éxito, 1 si hay un erro
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

