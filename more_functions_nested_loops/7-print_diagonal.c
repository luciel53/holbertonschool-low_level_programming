#include "main.h"

/**
* print_diagonal - function
* @n: operator
* @x: operator
* @y: operator
* Return: void
*/

void print_diagonal(int n)
{

int x = 0;
int y = 0;

	if (n <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y < x ; y++)
			{
				_putchar (' ');
			}
		_putchar (92);
		_putchar (10);
		}
	}
}
