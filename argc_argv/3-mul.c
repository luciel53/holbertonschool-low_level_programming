#include <stdio.h>
#include "main.h"

/**
* main - function
* @argc: argument
* @argv: vector argument
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int num1 = 0;
int num2 = 0;

	(void) argv;
	printf("%d\n", num1 * num2);
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
