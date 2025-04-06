#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - Crea un archivo y escribe contenido en él.
 * @filename: Nombre del archivo a crear.
 * @text_content: Texto a escribir en el archivo.
 *
 * Return: 1 en caso de éxito, -1 en caso de fallo.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes_escritos;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_escritos = write(fd, text_content, len);
		if (bytes_escritos == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

