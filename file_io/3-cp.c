#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fdr, fdw;
	int buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY, S_IRUSR | S_IWUSR);

	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdw = open(argv[2], O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR, buffer[1024]);

	if (fdw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdr);
		exit(99);
	}

	if (close(fdr) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}

	if (close(fdw) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}

	return (0);
}
