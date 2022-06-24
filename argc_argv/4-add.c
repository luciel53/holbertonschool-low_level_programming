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
int i;
int j;
int sum;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] ; j++)
			{
				sum = atoi(argv[i]);
				printf("%d\n", sum);
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}
