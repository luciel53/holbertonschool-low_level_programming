#include <stdio.h>
#include "main.h"

/**
* print_diagsums - function
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
int d;
int sum1 = 0;
int sum2 = 0;

	for (d = 0 ; d < size ; d++)
	{
		sum1 += a[(size + 1) * d];
		sum2 += a[(size - 1) * (d + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
