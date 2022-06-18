#include "main.h"

/**
* print_chessboard - function
* @a: operator & pointer
* Return: void
*/

void print_chessboard(char (*a)[8])
{
int i;
int x;
	for (i = 0 ; i < 8 ; i++)
	{
		for (x = 0 ; x < 8 ; x++)
		{
			if (i == 8)
			{
				_putchar (10);
			}
			_putchar (a[i][x]);
		}
	_putchar (10);
	}
}
