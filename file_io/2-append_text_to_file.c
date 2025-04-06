#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Agrega texto al final de un archivo
 * @filename: Nombre del archivo
 * @text_content: Texto a agregar
 *
 * Return: 1 en éxito, -1 en fallo
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;
	
	if (!filename)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	
	if (text_content)
	{
		while (text_content[len])
			len++;
		
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	
	close(fd);
	return (1);
}

