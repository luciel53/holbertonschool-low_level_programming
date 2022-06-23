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
int result = num1 * num2;

	if (argc == 3)
	{
		result += atoi(*argv++);
		num1 += atoi(argv[1]);
		num2 += atoi(argv[2]);
		printf("%d\n", result);
		putchar (10);
	}
	else
	{
		printf("Error");
		putchar (10);
		return (1);
	}
	return (0);
}
