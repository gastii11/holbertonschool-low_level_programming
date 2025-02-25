/**
 * fizz_buzz - remplazo
 *
 * Description: remplazo de multiplos de 3 y 5
 * Return: retona 0
 */
#include "main.h"
#include <stdio.h>
int fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (!(i == 100))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
/**
 * main - ejecuta funsion
 *
 * Return: retorna 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
