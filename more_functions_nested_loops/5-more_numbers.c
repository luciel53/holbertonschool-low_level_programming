#include "main.h"

/**
* more_numbers - function
*
* Return: void
*/

void more_numbers(void)
{
int c = 1;
int x = 0;
for (x = 0 ; x <= 9 ; x++)
{
	for (c = 0 ; c <= 14 ; c++)
	{
		if (c >= 10)
		{
			_putchar (c / 10 + '0');
		}
	_putchar (c % 10 + '0');
	}
_putchar (10);
}
}
