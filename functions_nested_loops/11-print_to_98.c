#include <stdio.h>
#include "main.h"

/**
* print_to_98 - function
* @n: operator
* Return: void
*/

void print_to_98(int n)
{
	for (n = 0 ; n < 99 ; n++)
	{
		if (n < 10)
		{
			_putchar (n % 10 + '0');
			_putchar (',');
			_putchar (' ');
		}
		if (n > 10)
		{		
			_putchar (n / 10 + '0');
			_putchar (n % 10 + '0');
			_putchar (',');
			_putchar (' ');
		}
	}
	for (n = 0 ; n > 97 ; n--)
	{
		_putchar (n / 10 + '0');
		_putchar (n % 10 + '0');
		_putchar (',');
		_putchar (' ');
	}
	if ( n == 98)
	{
		
		_putchar (n / 10 + '0');
		_putchar (n % 10 + '0');
		_putchar (',');
		_putchar (' ');
	}
_putchar (10);
}
