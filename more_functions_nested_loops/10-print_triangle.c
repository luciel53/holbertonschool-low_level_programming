#include "main.h"

/**
* print_triangle - function
* @x: operator
* return: void
*/
int x;
int y;
int i;
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = (size - 1) ; y > 0 ; y--)
			{
				_putchar (' ');
			}
				for (i = 0 ; i < x ; i++)
				{
					_putchar ('#');
				}
	_putchar (10);
		}
	}
}
