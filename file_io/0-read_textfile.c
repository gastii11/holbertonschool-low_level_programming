#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Lee un archivo de texto y lo imprime en stdoutdd
 * @filename: Nombre del archivo a leer
 * @letters: Número de caracteres a leer e imprimi
 *
 * Return: Número de caracteres realmente leídos e impres
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_leidos, bytes_escritos;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_leidos = read(fd, buffer, letters);
	if (bytes_leidos == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_escritos = write(STDOUT_FILENO, buffer, bytes_leidos);
	free(buffer);
	close(fd);

	if (bytes_escritos != bytes_leidos)
		return (0);

	return (bytes_leidos);
}

