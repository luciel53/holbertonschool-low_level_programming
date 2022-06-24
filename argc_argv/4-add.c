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
int sum = 0;

		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] ; j++)
			{
				if (argv[i][j] > '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		for (i = 1 ; i < argc ; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
}
