#include <stdio.h>
#include "main.h"

/**
* print_array - function
* @a: operator
* @n: operator
* Return: void
*/

void print_array(int *a, int n)
{

	while (*a != n)
	{
		printf("%d, ", *a);
		a++;
	}
putchar (10);
}
