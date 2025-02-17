#include<stdio.h>
/**
 * main - imprime el abecedario
 * Description: lo imprime de manera inversa
 * Return: return 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar (i);
		i--;
	}		putchar('\n');

		return (0);
}
