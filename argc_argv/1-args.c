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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
