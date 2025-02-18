/**
 * main - va a mostrar el abecedario en minuscula
 * Description: muestra todo el abecedario con _putchar
 * Return: retorna 0
 */
#include <stdio.h>
#include "main.h"
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
