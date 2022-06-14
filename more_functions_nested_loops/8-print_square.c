#include "main.h"

/**
* print_square - function
* @size: operator
* Return: void
*/
void print_square(int size)
{
int i;
int x;

if (size <= 0)
{
	_putchar (10);
}
else
{
	for (x = 0 ; x < size ; x++)
	{
		for (i = 2 ; i <= size ; i++)
		{
			_putchar ('#');
		}
	_putchar ('#');
	_putchar (10);
	}
}
}
