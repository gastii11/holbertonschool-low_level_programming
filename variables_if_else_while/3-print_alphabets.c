/**
 * main - imprime el abecedario en mayus y mini
 * Description: imprime todo el abacederario en minuscula y mayuscula
 * Return: retorna 0
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		putchar(str1[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
