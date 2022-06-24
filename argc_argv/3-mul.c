#include <stdio.h>
#include <stdlib.h>
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

	if (argc == 3)
	{
		num1 = atoi(*argv);
		num2 = atoi(*argv);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
