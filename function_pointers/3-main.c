#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: operator
 * @argv: pointer and operator
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}

	if (result != get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	result += atoi(*argv++);
	argc--;

printf("%d\n", result);

	return (0);
}
