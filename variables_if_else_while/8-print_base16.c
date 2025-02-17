#include <stdio.h>
/**
 * main - mustra los numeors de base 16
 * Description: va a imprimir todos los numeor de base 16
 * Return: return 0
 */


int main(void)
{
	char hex[] = "0123456789abcdef";
	int i = 0;

	while (hex[i] != '\0')
	{
		putchar(hex[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
