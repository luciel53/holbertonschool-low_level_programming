#include "main.h"

/**
* reverse_array - function
* @a: operator
* @n: operator
* Return: void
*/

void reverse_array(int *a, int n)
{
int i = 0;
int temp;
int f = n - 1;

	for (i = 0 ; i < n ; i++)
		;
		for (i = 0 ; i < n / 2 ; i++)
		{
			temp = a[i];
			a[i] = a[f];
			a[f] = temp;
			f--;
		}
	for (i = 0 ; i < n ; i++)
	{
	}
}
