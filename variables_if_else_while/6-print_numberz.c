#include <stdio.h>
/**
* main - imprime numero en pantalla
* Description: mostrara todos los numero de cero a diez
* Return: return 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar (n + '0');
		n++;
	}
	putchar ('\n');

	return (0);
}
