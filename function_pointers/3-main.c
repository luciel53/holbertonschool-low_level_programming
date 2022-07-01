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
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(argv[2]);
	if (!result)
	{
		printf("Error\n");
		exit(99);
	}

printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
