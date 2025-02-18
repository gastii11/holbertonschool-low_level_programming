#include <stdio.h>
/**
 * main - mostrara _putchar
 * Description: imprimira en pantalla _putchar
 * Return: return 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\n'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}
