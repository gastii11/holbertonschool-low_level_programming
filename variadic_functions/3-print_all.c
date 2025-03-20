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
	unsigned int i = 0;
	char *str, *separator = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
