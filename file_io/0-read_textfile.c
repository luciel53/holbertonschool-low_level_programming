#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - funct reads text file and prints it to POSIX standard output
 * @filename: pointer to the file
 * @letters: the number of letters it should read and print
 * Return: r
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);

	return (w);
}
