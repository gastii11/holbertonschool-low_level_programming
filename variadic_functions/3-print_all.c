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
	int has_format = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (has_format)
		{	
			printf(", ");
		}
	
		
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				has_format = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				has_format = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				has_format = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				has_format = 1;
				break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
