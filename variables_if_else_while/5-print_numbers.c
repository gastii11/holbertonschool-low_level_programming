/**
 * main - muestra numeros
 * Description: imprime los numeros del uno al diez
 * Return: retorna 0
 */
#include <stdio.h>

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
