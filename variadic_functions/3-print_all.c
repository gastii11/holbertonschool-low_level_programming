#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Imprime cualquier cosa según el formato dado.
 * @format: Una cadena de caracteres que indica el tipo de cada argumento.
 *
 * Tipos aceptados en el formato:
 * c: char
 * i: entero
 * f: float
 * s: char * (si es NULL, imprime "(nil)")
 *
 * Si un carácter del formato no corresponde a un tipo válido, se ignora.
 * Una nueva línea se imprime al final de la función.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
