#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: pointer to the file
 * @text_content: pointer to the text content
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
		{
			size++;
		}
		w = write(fd, text_content, size);
		if (w == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
